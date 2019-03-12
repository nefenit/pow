/* powr.c - calculates power recursively (naive)
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
 
ld powr(ld x, ull n) {
	return n ? x * powr(x, n-1) : 1.0L;
}
	
int main(int argc, char **argv) {
	if(argc != 3)
		usage(EXIT_FAILURE);
	printf("%Lf\n", powr(strtold(argv[1], NULL), strtoull(argv[2], NULL, 10)));
	return 0;
}
