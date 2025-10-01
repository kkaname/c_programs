CC := gcc 

all: main

main: main.o
	$(CC) main.o -o main

main.o: main.c

#generate the assembly equivalent code of the .c file using gcc
main.s: main.c
	$(CC) -S main.c

.PHONY:	clean

clean: 
	rm -rf main *.o *.s


