all: 
	gcc -c main.c
	gcc -c token.c
	gcc main.o token.o -o token

clean:
	rm -f *.o token
	
run: token
	./token