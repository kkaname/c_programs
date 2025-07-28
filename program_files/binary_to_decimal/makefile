#target is to produce execuate 'main'

main: main.o
	gcc -o main main.o -lm
#'-lm' flag is used to link the math.h library file

main.o: main.c 

.PHONY: clean

clean: 
	rm -rf main main.o
