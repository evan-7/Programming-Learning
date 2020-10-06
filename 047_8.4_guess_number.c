#include <stdio.h>

int main() {
	/*
	int guess = 0;
	char respond;
	printf("Have a number between 1 and 100.\n");
	printf("Is it %d.\n", guess);

	while ((respond = getchar()) != 'y') {
		if (respond != 'n') {
			printf("Well, i can only recognize 'y' or 'n'.\n");
		} else {
			guess++;
			printf("Is it %d.\n", guess);
		}

		while (getchar() != '\n') {
			continue;
		}


	}
	printf("I know it.\n");
	*/

	long input;
	char ch;

	printf(">>>");
	while (scanf("%ld", &input) != 1) {
		while ((ch = getchar()) != '\n') {
			putchar(ch);
			printf(" is not an integer. Please try again.\n");
		}
		printf(">>> ");
	}


	printf("input = %ld\n", input);




	return 0;
}