.DEFAULT_GOAL := build


OUTNAME		= MathMan

RUNPFX		= ./
ROOTCHECK	= tools/getroot.sh

CXX			= g++
CXXFLAGS	= -std=c++11 -o ${OUTNAME}

MAIN	  	= main.cpp
SOURCES	   := $(wildcard bin/Math/*.cpp)

DATE	    = date +"%F %H:%M:%S"


is_root:
	@${DATE}
	@echo "\tChecking For Root Permission ..."
	@sleep 1

	@chmod +x ${ROOTCHECK}
	@${RUNPFX}${ROOTCHECK}

	@clear

run: build
	@clear
	@${DATE}
	@${RUNPFX}${OUTNAME}

build:
	@${DATE}
	@echo "\tGenerating Machine Code ..."

	@${CXX} ${SOURCES} ${MAIN} ${CXXFLAGS}

	@echo "\nCode Done With Name: ${OUTNAME}"
	@echo "Execute Using: ${RUNPFX}${OUTNAME} or with command 'make run'"

install: is_root

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

	@apt-get install build-essential

update: is_root

	@apt-get update -y
	@clear

	@git stash
	@git pull
## Oh la la, 69 again 😏