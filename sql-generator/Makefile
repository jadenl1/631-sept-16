CC = cc
CFLAGS = -std=c11 -Wall -Wextra -Wpedantic

.PHONY: all clean

all: generate_sql

generate_sql: main.c
	$(CC) $(CPPFLAGS) $(CFLAGS) $(LDFLAGS) -o $@ $< $(LDLIBS)

clean:
	rm -f generate_sql
