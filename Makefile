CC = g++
DEBUG = -g
CFLAGS = -Wall -std=gnu++17 $(DEBUG)
LFLAGS = -Wall $(DEBUG)

compile: main.out

main.out: main.cpp search.h util.h
	$(CC) $(CFLAGS) -o main.out main.cpp

run: main.out
	main.out

clean:
	rm *.out
