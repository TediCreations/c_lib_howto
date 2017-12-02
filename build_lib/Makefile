#..............................................................................
# Project structure

MAIN_CXX_DIR = src/
MAIN_CXX = main.c
MAIN_OBJECT = main.o

#..............................................................................
# Project structure

EXEC = solver

SRC_DIR = src/
BIN_DIR = bin/
OBJ_DIR = obj/
LIB_DIR = lib/

#..............................................................................
# Tools

CC = gcc
AR = ar
CFLAGS = -g -w


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
	$(RM)		$(LIB_DIR)

.PHONY: run
run: build
	@$(BIN_DIR)$(EXEC)

#..............................................................................
# Pattern rules

$(BIN_DIR)$(EXEC): $(OBJ_DIR)$(MAIN_OBJECT) $(OBJ_DIR)math.o $(SRC_DIR)math.h | $(BIN_DIR)
	$(CC)		-o $(BIN_DIR)$(EXEC) $^

$(BIN_DIR)lib$(EXEC).a: $(OBJ_DIR)math.o $(SRC_DIR)math.h | $(BIN_DIR)
	$(AR)  		rcs $@ $<

$(OBJ_DIR)$(MAIN_OBJECT): $(MAIN_CXX_DIR)$(MAIN_CXX) | $(OBJ_DIR)
	$(CC)		-c -o $@ $(CFLAGS) $(MAIN_CXX_DIR)$(MAIN_CXX)

$(OBJ_DIR)math.o: $(SRC_DIR)math.c $(SRC_DIR)math.h | $(OBJ_DIR)
	$(CC)		-c -o $@ $(CFLAGS) $<

#..............................................................................
# Folder rules

$(BIN_DIR):
	$(MKDIR)	$@

$(OBJ_DIR):
	$(MKDIR)	$@

#..............................................................................
# EOF
