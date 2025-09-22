CC = gcc

all: main

main:main.o
	$(CC) main.o -o main

main.o: main.c
#uses implicit rule

.PHONY: clean

clean:
	rm -rf main main.o

