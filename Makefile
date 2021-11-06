.DEFAULT_GOAL := build


OUTNAME		= MathMan

RUNPFX		= ./
ROOTCHECK	= tools/getroot.sh

CXX			= g++
CXXFLAGS	= -std=c++11 -o ${OUTNAME}

MAIN	  	= src/main.cpp
SOURCES	   := $(wildcard bin/Math/*.cpp)

DATE	    = date +"%F %H:%M:%S"


run: build
	@${DATE}
	${RUNPFX}${OUTNAME}

build:
	@${DATE}
	@echo "\tGenerating Machine Code ..."

	@${CXX} ${SOURCES} ${MAIN} ${CXXFLAGS}

	@echo "\nCode Done With Name: ${OUTNAME}"
	@echo "Execute Using: ${RUNPFX}${OUTNAME} or with command 'make run'"

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
