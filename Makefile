#
# Makefile for Project FinalProject.c
# RENAME XYZ for your project
#
# The Build Rules for This Program
#
# Variables
# FinalProject.c
APP=FinalProject
CC=gcc
CFLAGS= -g
#CFLAGS=-Wall -Werror -ansi -std=c99 -g -I/usr/include
# other CFLAGS
#CFLAGS=-Wall -Werror -ansi -pedantic-errors -std=c99 -g
# linking flags
#LDFLAGS=-lm
LDFLAGS=-lncurses
# all the C source files end in .c
SRCS=$(wildcard *.c)
OBJS=$(SRCS:.c=.o)
EXE=$(APP).exe
LOG=$(APP).log

# Rules
# for compilation of c files into object files
%.o: %.c 
    $(CC) $(CFLAGS) -c -o $@ $<

# for linking object files into an executable program file
$(EXE): $(OBJS)
    $(CC) -o $@ $^ $(LDFLAGS)

# This is to trick make to know that "clean" and "run" are targets
.PHONY: clean run

# This rule this would split the output and copy to a log file
#   ./$(EXE) | tee $(LOG)
run: $(EXE)
    ./$(EXE)

clean:
    /bin/rm -f $(OBJS) $(EXE) $(LOG)
