all: menu

menu: menu.o min.o max.o sum.o diff.o
	gcc -o menu menu.o min.o max.o sum.o diff.o

min.o: min.c
	gcc -c -o min.o  min.c

max.o: max.c
	gcc -c -o max.o max.c

sum.o: sum.c
	gcc -c -o sum.o sum.c

diff.o: diff.c
	gcc -c -o diff.o diff.c

clean:
	rm ./*.o menu
