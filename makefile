CC = gcc

all: 
	$(CC) -c main.c
	$(CC) -c token.c
	$(CC) $< main.o token.o -o $@

clean:
	rm -f *.o all

run: all
	./all