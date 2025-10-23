CC := gcc

main: main.o
	$(CC) -o main main.c 

main.o: main.c 


main.s: main.c
	$(CC) -S main.c

.PHONY: clean

clean:
	rm -rf *.o main *.s
