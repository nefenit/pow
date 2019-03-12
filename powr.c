/* powr.c - calculates power recursively
 * (c) Copyright 2019 Bartosz Mierzynski
 */
 
#include <stdio.h>
 
typedef unsigned long long ull;
typedef long double ld;

void usage(int status) {
	fprintf(stderr, "usage: powr X N\n");
	exit(status);
}
 
ld powr(ld x, ull n)
	return n ? x * powr(x, n-1) : 1;
 
int main(int argc, char **argv) {

	return 0;
}
