#include <stdio.h>
#include <string.h>

#define PRAISE "You are an extraordinary being!"

int main() {
	char name[40];
	printf("Please enter your name: ");
	scanf("%s", name);

	printf("Hello, %s. %s\n", name, PRAISE);
	printf("Your name contains %zd letters, which occupies %zd bytes.\n", strlen(name), sizeof(name));
	printf("The PRAISE contains %zd letters, which occupies %zd bytes.\n", strlen(PRAISE), sizeof(PRAISE));

	return 0;
}