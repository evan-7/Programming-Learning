#include <stdio.h>

#define PI 3.14159

int main() {

	float radius, circum, area;
	printf("Please enter the value of radius: ");
	scanf("%f", &radius);

	area = PI * radius * radius;
	circum = 2 * PI * radius;

	printf("Your basic pizza parameters are as followings:\n");
	printf("radius : %.2f, circum : %.2f, area : %.2f.\n", radius, circum, area);

	

	return 0;
}