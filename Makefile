CC:= gcc
CFLAGS:= -Wall -g -Iinclude
EXE:=main
SRC:=./src
OBJ:=./obj
SRCS=$(wildcard $(SRC)/*.c)
OBJS:=$(patsubst $(SRC)/%.c,$(OBJ)/%.o,$(SRCS))

.PHONY: all run clean

all: $(EXE)

$(EXE): $(OBJS) | $(BIN)
	$(CC) $^ -o $@

$(OBJ)/%.o: $(SRC)/%.c | $(OBJ)
	$(CC) $(CFLAGS) -c $< -o $@

$(BIN) $(OBJ):
	mkdir $@

clean: 
	rm -rf src/*o main