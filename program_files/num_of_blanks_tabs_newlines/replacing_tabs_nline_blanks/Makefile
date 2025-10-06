CC := gcc

all: main 

main: main.o
	$(CC) main.o -o main

main.o: main.c

#rule to create assembly level code of he .c file
main.s: main.c
	$(CC) -S main.c

.PHONY: clean

clean: 
	rm -rf main *.c *.s
