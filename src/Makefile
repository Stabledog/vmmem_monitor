SHELL=/bin/bash
.ONESHELL:

CL=/mnt/c/Program\ Files\ \(x86\)/Microsoft\ Visual\ Studio/2022/BuildTools/VC/Tools/MSVC/14.37.32822/bin/Hostx86/x86/cl.exe

BuildArgs=/EHsc vmmem_monitor.c /link user32.lib

CFiles=$(shell ls *.c)

build: vmmem_monitor.exe

vmmem_monitor.exe: Makefile $(CFiles)
	$(CL) $(BuildArgs)
