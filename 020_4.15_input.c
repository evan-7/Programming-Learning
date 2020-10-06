#include <stdio.h>

int main() {
	int age;
	float assert;
	char pet[30];

	printf("Please enter your age and assert:\n");
	scanf("%d %f", &age, &assert);

	printf("Please enter your favorite pet:\n");
	scanf("%s", pet);

	printf("%d\t$%.2f\t%s\n", age, assert, pet);


	return 0;

}