CC = cc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic
PROGRAMS = Add Sub Mult

.PHONY: all clean

all: $(PROGRAMS)

$(PROGRAMS): %: %Main.c %.c %.h
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@ $*Main.c $*.c $(LDLIBS)

clean:
	rm -f $(PROGRAMS)
