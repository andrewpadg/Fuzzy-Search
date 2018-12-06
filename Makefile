CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++17 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

compile: lab11.out

lab11.out: lab11.cpp search.h util.h
	$(CC) $(CFLAGS) -o lab11.out lab11.cpp

run: lab11.out
	./lab11.out

clean:
	rm *.out
