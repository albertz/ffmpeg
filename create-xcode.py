#!/usr/bin/env python

import sys, os
os.chdir(os.path.dirname(__file__))

from mod_pbxproj import *

proj = XcodeProject.Load("Xcode-FFmpeg-empty.xcodeproj/project.pbxproj")

#proj.add_header_search_paths(paths=[
#	"$PROJECT_DIR/pylib",
#	"$PROJECT_DIR/CPython/Include",
#	], recursive=False)

#proj.add_other_cflags(flags=[
#	"-DWITH_THREAD",
#	"-DPLATFORM=\\\"darwin\\\"",
#	"-DHAVE_DYNAMIC_LOADING",
#	"-DUSE_DYLD_GLOBAL_NAMESPACE", # needed for e.g. pyobjc
#	])

#proj.add_other_ldflags(flags=[
#	"-lssl", "-lz", "-lcrypto", "-lsasl2"])

def add_file(fn, group, **kwargs):
	#print fn
	proj.add_file(fn, parent=group, **kwargs)

src = proj.get_or_create_group("src")

for l in glob("ffmpeg/lib*"):
	base = os.path.basename(l)
	group = proj.get_or_create_group(base, parent=src)
	
	for fn in glob(l + "/*.c"):
		print fn
		add_file(fn, group=group)

proj.saveFormat3_2(file_name="Xcode-FFmpeg.xcodeproj/project.pbxproj")

