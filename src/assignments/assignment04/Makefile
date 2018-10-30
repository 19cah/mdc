TARGET=main
INCDIR=.
CC=gcc
CFLAGS=-I$(INCDIR) -Wall -Wextra -O3

OBJ = main.o

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(TARGET) $(OBJ) *~ core
