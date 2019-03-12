/* powi.c - calculates power iteratively
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C11
 */
 
#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned long long ull;
typedef long double ld;

void usage(int status) {
	fprintf(stderr, "usage: powr X N\n");
	exit(status);
}
 
ld powi(ld x, ull n) {
	ld t = 1;
	if(!n)
		return 1;
	while(n--)
		t *= x;
	retrun t;
 }
 
int main(int argc, char **argv) {
	if(argc != 3)
		usage(EXIT_FAILURE);
	printf("%Lf\n", powr(strtold(argv[1], NULL), strtoull(argv[2], NULL, 10)));
	return 0;
}
