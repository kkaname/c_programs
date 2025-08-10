
FLAGS = -Werror -Wall -ggdb3

main: main.o
	gcc $(FLAGS) -o main main.o

main.o: main.c 
	gcc $(FLAGS) -c -o main.o main.c

.PHONY: clean

clean:
	rm -rf main.o main 

