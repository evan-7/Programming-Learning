#include <stdio.h>

#define GREETING "Hello world!"

int main() {
	
	// printf("%2s\n", GREETING);
	// printf("%24s\n", GREETING);
	// printf("%24.5s\n", GREETING);
	// printf("%-24.5s\n", GREETING);

	int n;
	n = printf("Hello world!\n");
	printf("%d\n", n);
	n = printf("");
	printf("%d\n", n);

	return 0;

}