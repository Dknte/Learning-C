CC = gcc
CFLAGS = -g -Wall

objects := $(patsubst %.c,%.o,$(wildcard *.c))

foo : $(objects)
	gcc $(CFLAGS) -o NumberGame.exe $(objects)

.PHONY: clean

clean:
	rm -f *.o *.h.gch *.exe
