#include <stdio.h>

int main() {
	float salary;
	printf("\aEnter your monthly salary:");
	printf("$______\b\b\b\b\b\b");
	scanf("%f", &salary);

	printf("\n\t$%.2f a month is %.2f a year.\n", salary, 12 * salary);
	printf("\rGee!\n");

	return 0;
}