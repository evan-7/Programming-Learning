#include <stdio.h>

int main() {
	int n = 0;
	size_t intsize;

	intsize = sizeof(int);	

	printf("n = %d, n has %zd bytes; all int has %zd byte.\n", n, sizeof(n), intsize);


	return 0;
}