/* powr3.c - calculates power recursively (optimized divide & conquer)
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C11
 */
 
#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned long long ull;
typedef long double ld;

void usage(int status) {
	fprintf(stderr, "usage: powr3 X N\n");
	exit(status);
}
 
ld powr3(ld x, ull n) {
	ld t;

	if(n) {
		t = powr3(x, n>>1);
		if(n & 1)
			return x * t * t;
		else
			return t * t;
	}
	
	return 1.0L;
}
	
int main(int argc, char **argv) {
	if(argc != 3)
		usage(EXIT_FAILURE);
	printf("%Lf\n", powr3(strtold(argv[1], NULL), strtoull(argv[2], NULL, 10)));
	return 0;
}
