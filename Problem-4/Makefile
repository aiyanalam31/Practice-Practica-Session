# Compiler
CC = gcc

# Compiler flags
CFLAGS = -std=c11 -g -Wall -Wshadow --pedantic -Wvla -Werror

# Source files
C_FILES = answer.c main.c
SRC_FILES = $(C_FILES) answer.h
EXEC = practica

$(EXEC): $(SRC_FILES)
	$(CC) $(CFLAGS) $(C_FILES) -o $(EXEC)

# Run valgrind
memory: $(EXEC)
	valgrind -s --leak-check=full ./$(EXEC)

# Clean rule
clean:
	rm -f $(EXEC)