#include <stdio.h>

int main() {
	unsigned int width, precision;
	int number = 256;
	double weight = 242.5;

	printf("Enter a field width: ");
	scanf("%d", &width);

	printf("The number is %*d\n", width, number);

	printf("Now enter the width and precision: ");
	scanf("%d %d", &width, &precision);

	printf("The weight is %*.*f.\n", width, precision, weight);

	return 0;

}