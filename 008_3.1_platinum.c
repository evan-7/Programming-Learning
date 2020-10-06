#include <stdio.h>

int main(){
	float weight;
	float value;

	printf("Are your worth your weight in platinum?\n");
	printf("Let`s check it now.\n");
	printf("Please enter your weight in pounds:\n");
	scanf("%f", &weight);

	value = 1700.0 * weight * 14.5833;

	printf("Your weight in platinum is worth $%.2f.\n", value);
	printf("You are easily worth that, if platinum price drop,\n");
	printf("eat more to keep your value.\n");

	return 0;

}