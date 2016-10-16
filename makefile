CC=gcc
CFLAGS=-Wall -std=c99
LDFLAGS=-pthread -lpthread -lm -lrt
LIBS=-lcheck
PWD=`PWD`

default: test

docker:
	docker build -t c-tdd/latest .
	docker run -dit -w /usr/c-tdd -v $(PWD):/usr/c-tdd c-tdd/latest

clean:
	rm -f *.o test_hello_world

test_hello_world.o:
	$(CC) -c test_hello_world.c

test_hello_world: test_hello_world.o
	$(CC) $(CFLAGS) -o test_hello_world test_hello_world.o $(LIBS) $(LDFLAGS)

test: clean test_hello_world
	./test_hello_world
