CC=gcc
CFLAGS=-O2 -ggdb -I../karel/include -Wall $(shell sdl-config --cflags)
LDFLAGS=-lSDL -lSDL_ttf -lSDL_image -lpthread
OBJ=LivingRoom.o ../karel/lib/libkarel.a

karel: $(OBJ)
	$(CC) -o $@ $(OBJ) $(LDFLAGS)

clean:
	rm -f *.o karel

run: karel
	./karel
