PROJECT = LispInterpret
OUT = lisp

CC = gcc
CFLAGS = -O3 -Wall -Werror
LIBS = -lreadline

SRC = lisp.c
OBJ = $(SRC:.c=.o)


all: OBJ
	$(CC) $(CFLAGS) $(OBJ) $(LIBS) -o $(OUT)
	rm *.o

OBJ:
	$(CC) -c $(CFLAGS) $(SRC)

clean:
	rm -f *.o
	rm -f $(OUT)
