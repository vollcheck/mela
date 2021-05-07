CFLAGS += -std=c99 -Wall -Wextra -pedantic -Wold-style-declaration
CFLAGS += -Wmissing-prototypes -Wno-unused-parameter
CC     ?= gcc

all: mela

mela: main.c types.c
	$(CC) -O3 $(CFLAGS) -o $@ $<

clean:
	rm -f mela *.o

.PHONY: all clean
