CC := gcc

main: main.o
	$(CC) main.o -o main

main.o: main.c

#rule to make assembly
main.s: main.c
	$(CC) -S main.c

.PHONY: clean

clean:
	rm -rf main *.o *.s
