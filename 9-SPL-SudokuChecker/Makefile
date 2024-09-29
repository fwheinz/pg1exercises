CC=gcc
CFLAGS=-ggdb -O2 -Wall -Iinclude
LIBS=lib/libcs.a
LDFLAGS=-lm
OBJ=main.o

main: $(OBJ)
	$(CC) $(OBJ) -o $@ $(LIBS) $(LDFLAGS)

run: main
	./main

clean:
	rm -f $(OBJ) main
