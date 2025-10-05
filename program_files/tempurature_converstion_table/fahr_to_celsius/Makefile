CC := gcc

all: main_f_to_c	

main_f_to_c: main_f_to_c.o 
	$(CC) main_f_to_c.o -o main_f_to_c

main_f_to__c.o: main_f_to_c.c

#rule to create assembly equivalent of .c program file
main_f_to_c.s: main_f_to_c.c                                     
	$(CC) -S main_f_to_c.c

.PHONY: clean

clean: 
	rm -rf  main_f_to_c *.o *.s

