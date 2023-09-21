CC = gcc

all: 
	$(CC) -c main.c
	$(CC) -c token.c
	$(CC) main.o token.o -o token
	
clean:
	rm -f *.o token

run: token
	./token