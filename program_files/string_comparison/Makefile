CC := gcc 

all: main

main: main.o
	$(CC) $^ -o $@ 

main.o: main.c 
	$(CC) -c $^ -o $@ 

#create assembly verson of the .c file
main.s: main.c
	$(CC) -S $^

.PHONY: clean

clean:
	rm -rf main *.o *.s
