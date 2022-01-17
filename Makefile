CC = gcc
CFLAGS = -g -Wall
BIN = bin
SRC = src
OBJ = obj
SRCS = $(wildcard $(SRC)/*.c)
OBJS = $(patsubst $(SRC)/%.c, $(OBJ)/%.o, $(SRCS))

MAINFILE = main
MAIN = $(BIN)/$(MAINFILE)

all: install

$(BIN):
	mkdir $@
$(OBJ):
	mkdir $@

install: CFLAGS=-Wall -O2 -DNDEBUG
install: clean
install: | $(BIN) $(OBJ)
install: $(MAIN)
release: install

$(MAIN): $(OBJS)
	$(CC) $(CFLAGS) $(OBJS) -o $@

$(OBJ)/%.o: $(SRC)/%.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	$(RM) -r $(BIN)/* $(OBJ)/*
