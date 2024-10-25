# Makefile for Bitwise Operations Project

CC = gcc
CFLAGS = -Wall -g
OBJ = major1.o power.o reverse.o replace.o palindrome.o

# Rule to build the executable
bitwise_operations: $(OBJ)
	$(CC) $(CFLAGS) -o bitwise_operations $(OBJ)

# Rules for individual object files
major1.o: major1.c major1.h
	$(CC) $(CFLAGS) -c major1.c

power.o: power.c major1.h
	$(CC) $(CFLAGS) -c power.c

reverse.o: reverse.c major1.h
	$(CC) $(CFLAGS) -c reverse.c

replace.o: replace.c major1.h
	$(CC) $(CFLAGS) -c replace.c

palindrome.o: palindrome.c major1.h
	$(CC) $(CFLAGS) -c palindrome.c

# Clean rule to remove compiled files
clean:
	rm -f *.o bitwise_operations
