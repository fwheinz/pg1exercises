CC=gcc
CFLAGS=-O2 -ggdb -I../karel/include -Wall $(shell sdl-config --cflags)
LDFLAGS=-lSDL -lSDL_ttf -lSDL_image
OBJ=DamagedPillars.o ../karel/lib/libkarel.a

karel: $(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean:
	rm -f karel *.o

run: karel
	./karel
