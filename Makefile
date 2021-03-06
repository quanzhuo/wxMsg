# 
#   File    : Makefile
#   Author  : Quan Zhuo <zhuo.quan@outlook.com>
#   Purpose : for gnu make
#   Created : Mon 14 Sep 2015 07:10:59 PM CST 
#     
#   This program is free software; you can redistribute it and/or
#   modify it under the terms of the GNU General Public License as
#   published by the Free Software Foundation; either version 2 of the
#   License, or (at your option) any later version.
#  
#   This program is distributed in the hope that it will be useful,
#   but WITHOUT ANY WARRANTY; without even the implied warranty of
#   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
#   General Public License for more details.
#  
#   You should have received a copy of the GNU General Public License along
#   with this program; if not, write to the Free Software Foundation, Inc.,
#   51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
# 

# Which compiler
CC = g++

# Where are include files kept
INCLUDE = ./include

# Where to install
INSTDIR = ~/Desktop

# Flags for wxWidgets
WXINC = $(shell wx-config --cxxflags)

# Libs for wxWidgets
WXLIBS = $(shell wx-config --libs)

# Compile options
CFLAGS = -Wno-deprecated-declarations

# All the object files
OBJECTS := $(patsubst src%.cc, build%.o, $(wildcard src/*.cc))

all: wxMsg

wxMsg: outdir $(OBJECTS) 
	$(CC) -I$(INCLUDE) -o $@  $(OBJECTS) $(WXLIBS)
	
build/%.o: src/%.cc
	$(CC) $(CFLAGS) -I$(INCLUDE) $(WXINC) -c $^ -o $@ 
		
.PHONY: clean	
	
clean:
	-rm -rf build
	-rm -rf wxMsg
	
outdir:
	@if [ ! -d build ]; \
	  then \
	  mkdir build ; \
	fi
	
install: wxMsg
	@if [ -d $(INSTDIR)	]; \
		then \
		cp wxMsg $(INSTDIR); \
		chmod a+x $(INSTDIR)/wxMsg; \
		echo "Installed in $(INSTDIR)";\
	else \
		echo "Sorry, $(INSTDIR) does not exist"; \
	fi
	
uninstall:
	-rm -rf ~/Desktop/wxMsg	
