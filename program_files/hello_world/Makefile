all: main main.s

main: main.o
	gcc main.o -o main

main.o: main.i
	gcc -c main.i -o  main.o

main.i: main.c
	gcc -E main.c -o main.i

main.s: main.c
	gcc -S main.c

.PHONY: clean clean_asm

clean:
	rm main main.o main.i

cleanAsm:
	rm main.s


