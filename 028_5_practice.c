#include <stdio.h>

#define FORMAT "%s! C is cool!\n"
#define TEN 10
#define M_PER_H 60

int main(void) {

	/*
	int num = 10;
	printf(FORMAT, FORMAT);

	printf("%d\n", ++num);    // 11
	printf("%d\n", num++);   // 11
	printf("%d\n", num--);   // 12
	printf("%d\n", num);     // 11
	*/

	/*
	char c1, c2;
	int diff;
	float num;

	c1 = 'S';
	c2 = 'O';

	diff = c1 - c2;
	num = diff;

	printf("%c%c%c:%d    %3.2f\n", c1, c2, diff, c1, num);
	*/

	/*
	int i = 0;
	while (i++ < TEN) {
		printf("%5d\n", i);
	}
	printf("\n");
	printf("Done!\n");
	*/

	/*
	char i = 'a';
	while (i <= 'g') {
		printf("%c\n", i);
		i++;
	}
	printf("Done!\n");
	*/

	/*
	int min, hr, left;
	printf("Please enter the value of minutes: ");
	scanf("%d", &min);

	while (min > 0) {
		hr = min / 60;
		left = min % 60;

		printf("%d minutes is %d hours and %d minutes.\n", min, hr, left);

		printf("Please enter the value of minutes: ");
		scanf("%d", &min);
	}
	printf("Done!\n");
	*/

	/*
	int num;
	int index = 0;
	printf("Please etner a number: ");
	scanf("%d", &num);

	while (index <= 10) {
		num = num + index;
		printf("%d\n", num);
		num = num - index;
		index++;
	}
	printf("Done!\n");
	*/

	/*
	int days, weeks, left;
	printf("Please enter the values of days: ");
	scanf("%d", &days);

	while (days > 0) {
		weeks = days / 7;
		left = days % 7;

		printf("%d days are %d weeks and %d days.\n", days, weeks, left);
		printf("Please enter the values of days: ");
		scanf("%d", &days);

	}
	printf("Done!\n");
	*/

	/*
	const float FEET_TO_CM = 25.4;
	const float INCH_TO_CM = 2.54;

	float height;
	printf("Please enter your height in centimeters: ");
	scanf("%f", &height);

	int feet;
	float inch;

	while (height > 0) {
		feet = height / FEET_TO_CM;
		inch = (height - feet * FEET_TO_CM) / INCH_TO_CM;

		printf("%.1f cm = %d feet, %.f inch\n", height, feet, inch);

		printf("Please enter your height in centimeters: ");
		scanf("%f", &height);
	}
	printf("Done!\n");
	*/


	return 0;
}