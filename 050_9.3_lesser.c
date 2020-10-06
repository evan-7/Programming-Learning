#include <stdio.h>

int lesser(int, int);

int main() {

	int a, b;
	printf("Enter two integter numbers to compare: ");
	while (scanf("%d %d", &a, &b) == 2) {
		printf("The lesser of %d and %d is %d.\n", a, b, lesser(a, b));
		printf("Enter two integter numbers to compare: \n");
	}

	return 0;
}


int lesser(int a, int b) {
	return (a > b ? b : a);
}
























