all: main

clean: main main.o contaspazi.o
	rm -rf main main.o contaspazi.o

main: main.o contaspazi.o
	gcc -o main main.o contaspazi.o

main.o: main.c contaspazi.h
	gcc -c -o main.o main.c

contaspazi.o: contaspazi.c
	gcc -c -o contaspazi.o contaspazi.c