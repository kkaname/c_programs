CC := gcc

all: main

main: main.o
	$(CC) main.o -o main

main.o: main.c

#produce assembly level version of the .c code
main.s: main.c
	$(CC) -S main.c


.PHONY: clean

clean:
	rm -rf main *.o *.s
