all: main

main: main.o vettori.o
	gcc -o main main.o vettori.o

main.o: main.c vettori.h
	gcc -c -o main.o main.c

vettori.o: vettori.c
	gcc -c -o vettori.o vettori.c

clean: main main.o vettori.o
	rm -rf main main.o vettori.o