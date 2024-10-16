vector_3d: main.o vector_3d.o
	gcc -o vector_3d main.o vector_3d.o

main.o: main.c
	gcc -c main.c

vector_3d.o: vector_3d.c vector_3d.h
	gcc -c vector_3d.c

clean:
	rm -f main.o vector_3d.o vector_3d
