CC := gcc

all: main

main: main.o
	$(CC) main.o -o main 

main.o: main.c

#Rule to create assembly equivalent code of the .c file
main.s: main.c
	$(CC) -S main.c

.PHONY: clean

clean: 
	rm -rf main *.o *.s
