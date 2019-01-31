#!/usr/bin/python3

import getopt, sys
import cmsis_svd
from cmsis_svd.parser import SVDParser

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

def print_comment(s):
    print("/* %s %s */" % (s, "-" * (80 - 7 - len(s))))

def clean_desc(s):
    return ' '.join(s.replace("\n", "").split())

cmsis_svd.model.SVDPeripheral.__lt__ = sort_by_base_address
cmsis_svd.model.SVDRegister.__lt__ = sort_by_address_offset
cmsis_svd.model.SVDField.__lt__ = sort_by_bit_offset


try:
    opts, args = getopt.getopt(sys.argv[1:], "d:cp:", ["device", "no_comment", "peripheral"])
except getopt.GetoptError as err:
    print(str(err))
    usage()
    sys.exit(2)

device = None
no_comments = False
selected_peripheral = None
output = None
verbose = False
for o, a in opts:
    if o == "-c":
        no_comments = True
    elif o in ("-d", "--device"):
        device = o
    elif o in ("-p", "--peripheral"):
        selected_peripheral = a
    else:
        assert False, "unhandled option"

if (device == None):
    parser = SVDParser.for_packaged_svd('STMicro', 'STM32G07x.svd')

if (selected_peripheral == None):
    for peripheral in sorted(parser.get_device().peripherals):
        print("#define %s_BASE\t\t\t(0x%08x)" % (peripheral.name, peripheral.base_address))
    print("\n")

for peripheral in sorted(parser.get_device().peripherals):
    if (selected_peripheral != None):
        if (peripheral.name != selected_peripheral):
            continue

    print("")
    print_comment("%s: %s" % (peripheral.name, clean_desc(peripheral.description)))
    for register in sorted(peripheral.registers):
        register_name = "%s_%s" % (peripheral.name, register.name)
        print("#define %s\t\t\tMMIO32(%s + 0x%02x)" % (register_name, peripheral.name + "_BASE", register.address_offset))

    print("")
    for register in sorted(peripheral.registers):
        register_name = "%s_%s" % (peripheral.name, register.name)
        print_comment("--- %s values" % (register_name))
        for field in sorted(register.fields):
            field_name = "%s_%s" % (register_name, field.name)
            if (not no_comments):
                print("// %s: %s" %(field_name, clean_desc(field.description)))
            if (field.bit_width > 1):
                print("#define %s_SHIFT\t\t%d" %(field_name, field.bit_offset))
                print("#define %s_MASK\t\t0x%02x" %(field_name, (1 << field.bit_width) - 1))
                print("/** @defgroup %s %s" % (field_name.lower(), field.name.replace("_","")))
                print("* @brief %s" % (clean_desc(field.description)))
                print("@{*/")
                print("/*@}*/")
            else:
                print("#define %s\t\t(1 << %d)" %(field_name, field.bit_offset))

            print("")

