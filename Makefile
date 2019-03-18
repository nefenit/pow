# (c) Copyright 2019 Bartosz Mierzynski

CC=cc
CFLAGS=-Wall -pedantic -std=c11 -O2

all: powi powi2 powr powr2 powr3

powi:
	@$(CC) $(CFLAGS) powi.c -o powi

powi2:
	@$(CC) $(CFLAGS) powi2.c -o powi2

powr:
	@$(CC) $(CFLAGS) powr.c -o powr

powr2:
	@$(CC) $(CFLAGS) powr2.c -o powr2
	
powr3:
	@$(CC) $(CFLAGS) powr3.c -o powr3

clean:
	@rm powr powi
