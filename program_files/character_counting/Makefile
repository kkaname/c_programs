CC = gcc

all: main

main:main.o
	$(CC) main.o -o main

main.o: main.c
#uses implicit rule

#this creates assembly level code of the .c file
main.s: main.c
	gcc -S main.c

.PHONY: clean

clean:
	rm -rf main *.o *.s

