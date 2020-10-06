#include <stdio.h>

#define PRAISE "Yor are extraordinary!"

int main() {
	char name[40];
	printf("Please enter your name: ");
	scanf("%s", name);

	printf("Hello, %s. %s\n", name, PRAISE);

	return 0;
}