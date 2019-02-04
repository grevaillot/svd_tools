#!/usr/bin/python3


import getopt, sys, os
import pkg_resources
import cmsis_svd

from cmsis_svd.parser import SVDParser

def similar(a, b):
    return SequenceMatcher(None, a, b).ratio()

def sort_by_address_offset(a,b):
    if (a.address_offset < b.address_offset):
        return True
    return False

def sort_by_base_address(a,b):
    if (a.base_address < b.base_address):
        return True
    return False

def sort_by_bit_offset(a,b):
    if (a.bit_offset > b.bit_offset):
        return True
    return False

def pad_comment(s, line_len=80):
    pat = "/* --- %s %s */"
    return pat % (s, "-" * (line_len - len(pat)-2*2 - len(s)))

def clean_desc(s):
    return ' '.join(s.replace("\n", "").split())

cmsis_svd.model.SVDPeripheral.__lt__ = sort_by_base_address
cmsis_svd.model.SVDRegister.__lt__ = sort_by_address_offset
cmsis_svd.model.SVDField.__lt__ = sort_by_bit_offset

def usage(msg=None):
    if (msg != None):
        print(msg)
    print("""usage: %s [-d device or -s file.svd] [options]
    -d: svd device file to load
    -w: write output
    -l: list cmsis_svd devices'""" % sys.argv[0])
    exit(1)

try:
    opts, args = getopt.getopt(sys.argv[1:], "ld:cp:w", ["list", "device", "no_comment", "peripheral"])
except getopt.GetoptError as err:
    print(str(err))
    usage()
    sys.exit(2)

do_list = False
selected_device = None
selected_peripheral = None
svd_file = None
no_comments = True 
no_doxygen = False 
output = None
verbose = False

for o, a in opts:
    if o in ("-l", "--list"):
        do_list = True 
    elif o in ("-s", "--svd"):
        svd_file = a
    elif o in ("-d", "--device"):
        selected_device = a
    elif o in ("-p", "--peripheral"):
        selected_peripheral = a
    elif o in ("-c", "--no_comment"):
        no_comments = True
    elif o == "-w":
        output = True
    else:
        usage()
        exit(1)

if (do_list):
    try:
        for v in pkg_resources.resource_listdir("cmsis_svd", "data"):
            for d in sorted(pkg_resources.resource_listdir("cmsis_svd", "data/%s" % (v))):
                if d.lower().endswith(".svd"):
                    print("%s %s" % (v, d))
            print("")
    except:
        assert False, "Could not list cmsis_svd data."
    exit(0)

if (svd_file != None):
    parser = SVDParser.for_xml_file(svd_file)
elif (selected_device != None):
    device = None
    dev = selected_device.lower().replace(".svd", "")
    for v in pkg_resources.resource_listdir("cmsis_svd", "data"):
        for d in pkg_resources.resource_listdir("cmsis_svd", "data/%s" % (v)):
             if (dev == d.lower().replace(".svd","")):
                device = d
                vendor = v

    if (device == None):
        print("Could not find %s in cmsis_svd data." % (selected_device))
        exit(1)

    parser = SVDParser.for_packaged_svd(vendor, device)
else:
    print("No device selected.")
    usage()
    exit(1)

device_name = parser.get_device().name

if (output):
    try:
        os.mkdir(device_name)
    except:
        pass

if (selected_peripheral == None):
    memorymap_str = "#pragma once \n\n"
    for peripheral in sorted(parser.get_device().peripherals):
        memorymap_str += "#define %s_BASE\t\t\t(0x%08x)\n" % (peripheral.name, peripheral.base_address)

    if (output):
        fn = device_name + "/memorymap.h"
        with open(fn, "w") as file:
            file.write(memorymap_str)
    else:
        print(memorymap_str)

for peripheral in sorted(parser.get_device().peripherals):
    if (selected_peripheral != None):
        if (peripheral.name != selected_peripheral):
            continue

    peripheral_str = "#pragma once \n\n"
    peripheral_str += pad_comment("%s: %s" % (peripheral.name, clean_desc(peripheral.description))) + "\n\n"

    for register in sorted(peripheral.registers):
        register_name = "%s_%s" % (peripheral.name, register.name)
        peripheral_str += "#define %s\t\t\tMMIO32(%s + 0x%02x)\n" % (register_name, peripheral.name + "_BASE", register.address_offset)

    peripheral_str += "\n"

    for register in sorted(peripheral.registers):
        register_name = "%s_%s" % (peripheral.name, register.name)
        register_str = "\n" + pad_comment("%s values" % (register_name)) + "\n\n"
        for field in sorted(register.fields):
            field_name = "%s_%s" % (register_name, field.name)
            field_str = ""
            if (not no_comments):
                field_str += "\n// %s: %s\n" % (field_name, clean_desc(field.description))
            if (not no_doxygen):
                field_str += "\n/* @def %s\n" % (field_name)
                field_str += "* @brief %s */\n" % (clean_desc(field.description))
            if (field.bit_width > 1):
                field_str += "#define %s_SHIFT\t\t%d\n" % (field_name, field.bit_offset)
                field_str += "#define %s_MASK\t\t0x%02x\n" % (field_name, (1 << field.bit_width) - 1)
                if (not no_doxygen):
                    field_str += "/** @defgroup %s %s\n" % (field_name.lower(), field.name.replace("_",""))
                    field_str += "* @brief %s\n" % (clean_desc(field.description))
                    field_str += "@{*/\n"
                    field_str += "/*@}*/\n"
            else:
                field_str += "#define %s\t\t(1 << %d)\n" %(field_name, field.bit_offset)

            register_str += field_str
        peripheral_str += register_str 


    if (output):
        fn = device_name + "/" + peripheral.name.lower() + ".h"
        with open(fn, "w") as file:
            file.write(peripheral_str)
    else:
        print(peripheral_str)

# vim: tabstop=8 expandtab shiftwidth=4 softtabstop=4
