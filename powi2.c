/* powi2.c - calculates power iteratively
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C11
 */
 
#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned long long ull;
typedef long double ld;

void usage(int status) {
	fprintf(stderr, "usage: powi2 X N\n");
	exit(status);
}
 
ld powi2(ld x, ull n) {
	ld t = 1.0L;
	while(n) {
		if(n & 1)
			t *= x;
		n >>= 1;
		x *= x;
	}
	return t;
}
 
int main(int argc, char **argv) {
	if(argc != 3)
		usage(EXIT_FAILURE);
	printf("%Lf\n", powi2(strtold(argv[1], NULL), strtoull(argv[2], NULL, 10)));
	return 0;
}
