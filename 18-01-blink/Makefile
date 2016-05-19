#############################################################################
#
# Project Makefile
#
# (c) Wouter van Ooijen (www.voti.nl) 2016
#
# This file is in the public domain.
# 
#############################################################################

# source files in this project (main.cpp is automatically assumed)
SOURCES :=

# header files in this project
HEADERS :=

# other places to look for files for this project
SEARCH  := 

# set BMPTK to the next higher directory and defer to the Makefile.due
BMPTK := $(BMPTK)../
include $(BMPTK)Makefile.due


settings for Arduino Due projects
TARGET            := arduino_due
SERIAL_PORT       := COM2
CONSOLE_BAUDRATE  := 2400
SEARCH            += ../hwlib

# set BMPTK to the bmptk subdirectory
BMPTK := $(BMPTK)bmptk/

# Defer to the bmptk/Makefile.inc to do the work
include $(BMPTK)Makefile.inc
