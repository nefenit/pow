# (c) Copyright 2019 Bartosz Mierzynski

CC=cc
CFLAGS=-Wall -pedantic -std=c11

all: powr powi

powi:
	@$(CC) $(CFLAGS) powi.c -o powi

powr:
	@$(CC) $(CFLAGS) powr.c -o powr

clean:
	@rm powr powi
