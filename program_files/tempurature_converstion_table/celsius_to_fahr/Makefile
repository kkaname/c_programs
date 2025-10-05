CC := gcc

all: main_c_to_f

main_c_to_f: main_c_to_f.o
	$(CC) main_c_to_f.o -o main_c_to_f

main_c_to_f.o: main_c_to_f.c

#rule to create the assembly equivalent of the .c file
main_c_to_f.s: main_c_to_f.c
	$(CC) -S main_c_to_f.c

.PHONY: clean

clean:
	rm -rf main_c_to_f *.o *.o
