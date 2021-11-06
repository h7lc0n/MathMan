.DEFAULT_GOAL := build


RUNPFX		= ./
ROOTCHECK	= tools/getroot.sh

CXX			= g++
CXXFLAGS	= -o
OUTNAME		= MathMan

MAIN	  	= src/main.cpp
SOURCES	   := $(wildcard bin/Math/*.cpp)

DATE	    = date +"%F %H:%M:%S"


run: build
	@${DATE}
	${RUNPFX}${OUTNAME}

build:
	@${DATE}
	${CXX} ${SOURCES} ${MAIN} ${CXXFLAGS} ${OUTNAME}

install:
	@chmod +x getroot.sh
	@${RUNPFX}${ROOTCHECK}

	@${DATE}
	@echo "\tUpdating System ..."
	
	@sleep 1
	@clear
	
	@apt-get update -y

	@clear

	@${DATE}
	@echo "\tInstalling gcc/g++/make and other packages ..."

	@sleep 3
	@clear

	@apt install build-essential


update:
	@chmod +x getroot.sh
	@${RUNPFX}${ROOTCHECK}

	@apt-get update -y
	@clear

	@git stash
	@git pull
