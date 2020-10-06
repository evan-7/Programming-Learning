#include <stdio.h>

#define SPACE ' '

int main() {

	char ch;
	while ((ch = getchar()) != '\n') {
		if (ch == SPACE) {
			putchar(ch);
		} else {
			putchar(ch+1);
		}
	}
	putchar(ch);

	/*
	char ch;
	while ((scanf("%c", &ch)) == 1) {
		if (ch == SPACE) {
			printf("%c", ch);
		} else {
			printf("%c", ch+1);
		}
	}
	printf("\n");
	*/

	return 0;
}