#include <stdio.h>

void to_binary(unsigned long n);

int main() {
	unsigned long num;
	printf("Enter value of num:\n");

	while (scanf("%lu", &num) == 1) {
		printf("%lu--->", num);
		to_binary(num);
		printf("\n");
		printf("Enter value of num:\n");
	}


	return 0;
}


void to_binary(unsigned long n) {
	int r;
	r = n % 2;
	if (n >= 2) {
		to_binary(n / 2);
	}
	putchar(r == 0 ? '0' : '1');
}