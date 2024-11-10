main: readline.o inventory.o
	gcc readline.o inventory.o -o inventory

inventory.o: inventory.c
		gcc -c inventory.c

readline.o: readline.c readline.h
		gcc -c readline.c


clean:
	rm -f readline.o inventory.o 