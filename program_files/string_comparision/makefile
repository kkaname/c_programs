CC := gcc 

all: main

main: main.o
	$(CC) $^ -o $@ 

main.o: main.c 
	$(CC) -c $^ -o $@ 

.PHONY: clean

clean:
	rm -rf main *.o
