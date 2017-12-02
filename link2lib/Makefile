#..............................................................................
# Project structure

MAIN_CXX_DIR = src/
MAIN_CXX = main.c
MAIN_OBJECT = main.o

#..............................................................................
# Project structure

EXEC = user

SRC_DIR = src/
BIN_DIR = bin/
OBJ_DIR = obj/
LIB_DIR = lib/

#..............................................................................
# Tools

CC = gcc
AR = ar

CFLAGS = -g -w -I. -Iinc
LDFLAGS =	-static\
			-L$(LIB_DIR)\
			-lsolver

ECHO = @echo
MKDIR = mkdir -p
RM = rm -rf

#..............................................................................
# Phony rules

.PHONY: all
all: build
	$(ECHO)		"Done!"

.PHONY: build
build: $(BIN_DIR)$(EXEC) $(BIN_DIR)lib$(EXEC).a

.PHONY: clean
clean:
	$(RM)		$(BIN_DIR)
	$(RM)		$(OBJ_DIR)

.PHONY: run
run: build
	@$(BIN_DIR)$(EXEC)

#..............................................................................
# Pattern rules

$(BIN_DIR)$(EXEC): $(OBJ_DIR)$(MAIN_OBJECT) | $(BIN_DIR)
	$(CC)		-static $^ -o $(BIN_DIR)$(EXEC) $(LDFLAGS)

$(BIN_DIR)lib$(EXEC).a: | $(BIN_DIR)
	$(AR)		rcs $@ $<

$(OBJ_DIR)$(MAIN_OBJECT): $(MAIN_CXX_DIR)$(MAIN_CXX) | $(OBJ_DIR)
	$(CC)		$(CFLAGS) $(MAIN_CXX_DIR)$(MAIN_CXX) -c -o $@

#..............................................................................
# Folder rules

$(BIN_DIR):
	$(MKDIR)	$@

$(OBJ_DIR):
	$(MKDIR)	$@

#..............................................................................
# TODO: Put in my website as a memo including output (automatic variables)
# https://www.gnu.org/software/make/manual/html_node/Automatic-Variables.html

.PHONY: test
test: src/main.o src/test1.h phony1  | src/test2.h testDir/ phony2
	@echo		"@ = $@"
	@echo		"< = $<"
	@echo		"^ = $^"
	@echo		"* = $*"

src/test1.h:
src/test2.h:

.PHONY: phony1
phony1:


.PHONY: phony2
phony2:

testDir/:
	mkdir		-p $@

#..............................................................................
# Makefile Tests (under progress)

$(OBJ_DIR)math.d: $(SRC_DIR)math.c | $(OBJ_DIR)
	$(CC)		-MM $(CFLAGS) $< > $@