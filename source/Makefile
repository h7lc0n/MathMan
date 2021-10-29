.DEFAULT_GOAL := build	## Is the default rule to run

COMP   = g++			## Compiler used is g++
FLAGS  = -o			## -o flag to save the output executable file
SRCS  := $(wildcard *.cpp)	## All files with .cpp exstinsion
PRGNM  = "MathMan"		## MathMan - is the output file name

## Run all in once ( not much functionality haha ) ~ just for fun ~
run: build
	@./${PRGNM}				## Execute MathMan file
	@echo "\n\n"				## New-line
	@echo "Makefile ran successfully!"	## Success message

build:
	## So it will look like :
	## g++ main.cpp MathMan.cpp -o MathMan

	${COMP} ${SRCS} ${FLAGS} ${PRGNM}
	clear
