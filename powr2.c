/* powr2.c - calculates power recursively (divide & conquer)
 * (c) Copyright 2019 Bartosz Mierzynski
 * Written in C11
 */
 
#include <stdio.h>
#include <stdlib.h>
 
typedef unsigned long long ull;
typedef long double ld;

void usage(int status) {
	fprintf(stderr, "usage: powr2 X N\n");
	exit(status);
}
 
ld powr2(ld x, ull n) {
	if(n)
		if(n & 1)
			return x * powr2(x, n>>1) * powr2(x, n>>1);
		else
			return powr2(x, n>>1) * powr2(x, n>>1);
	return 1.0L;
}
	
int main(int argc, char **argv) {
	if(argc != 3)
		usage(EXIT_FAILURE);
	printf("%Lf\n", powr2(strtold(argv[1], NULL), strtoull(argv[2], NULL, 10)));
	return 0;
}
