#!/usr/bin/python3

import gdb
import pkg_resources

from cmsis_svd.parser import SVDParser

class LoadSVD(gdb.Command):
	def __init__(self):
		self.vendors = {}
		vendor_names = pkg_resources.resource_listdir("cmsis_svd", "data")
		for vendor in vendor_names:
			fnames = pkg_resources.resource_listdir("cmsis_svd", "data/{}".format(vendor))
			self.vendors[vendor] = [fname for fname in fnames if fname.lower().endswith(".svd")]

		gdb.Command.__init__(self, "svd2_load", gdb.COMMAND_USER)

	def complete(self, text, word):
		args = gdb.string_to_argv(text)
		num_args = len(args)
		if text.endswith(" "):
			num_args += 1
		if not text:
			num_args = 1

		# "svd_load <tab>" or "svd_load ST<tab>"
		if num_args == 1:
			comp = []
			for vendor in self.vendors:
				if vendor.lower().startswith(word.lower()):
					comp.append(vendor)
			if (len(comp) > 0):
				return comp;
			return gdb.COMPLETE_FILENAME

		# "svd_load STMicro<tab>" or "svd_load STMicro STM32F1<tab>"
		elif num_args == 2 and args[0] in self.vendors:
			prefix = word.lower()
			filenames = self.vendors[args[0]]
			return [fname for fname in filenames if fname.lower().startswith(prefix)]
		return gdb.COMPLETE_NONE

	def invoke(self, args, from_tty):
		args = gdb.string_to_argv(args)
		argc = len(args)
		if argc == 1:
			gdb.write("Loading SVD file {}...\n".format(args[0]))
			parser = SVDParser.for_xml_file(svd_file)
		elif argc == 2:
			gdb.write("Loading SVD file {}/{}...\n".format(args[0], args[1]))
			parser = SVDParser.for_packaged_svd(vendor, device)

		self.dont_repeat()

class SVD(gdb.Command):
	def __init__(self, svd_parser):
		gdb.Command.__init__(self, "svd2", gdb.COMMAND_DATA)
		self.parser = svd_parser

	def complete(self, text, word):
		args = gdb.string_to_argv(text)

		if text.endswith(" "):
			args.append("")

		num_args = len(args)

		comp = []
		if (num_args == 0):
			comp.append("help")
			for p in self.svd_file.peripherals:
				comp.append(p)
		elif (num_args == 1):
			for p in self.file.peripherals():
				if (p.startswith(args[0].upper())):
					comp.append(p)
		else:
			for r in self.register_list(args[0].upper()):
				if r.upper().startswith(args[1].upper()):
					comp.append(r)

		return comp
