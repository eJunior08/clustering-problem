### Makefile ###

all: trab1

trab1: main.o
	gcc -o trab1 main.o

main.o: main.c
	gcc -c main.c

clean:
	rm -rf *.o

rmproper: clean
	rm -rf trab1

run: trab1
	./trab1