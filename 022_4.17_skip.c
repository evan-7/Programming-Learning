#include <stdio.h>

int main() {
	int n;
	printf("Enter three integer numbers: ");
	scanf("%*d %*d %d", &n);

	printf("The last number is %d.\n", n);

	

	return 0;
}