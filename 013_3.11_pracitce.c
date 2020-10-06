#include <stdio.h>

int ascii(void);
int sayWords(void);
int print_float(void);
int show_seconds(void);
int quart(void);
int show_height(void);


int main() {

	// ascii();
	// sayWords();
	// print_float();
	// show_seconds();
	// quart();
	show_height();


	return 0;
}

int ascii(void) {

	int target_num;
	printf("Please enter a number: \n");
	scanf("%d", &target_num);

	if (target_num >= 0 && target_num <= 128) {
		printf("%c\n", target_num);
	} else {
		printf("Invalid input.\n");
	}


	return 0;
}

int sayWords(void) {
	printf("Startled by the sudden sound, Sally shouted, \n");
	printf("\"By the Great Pumpkin, what was that!\"\n");

	return 0;
}

int print_float(void) {
	float target;
	printf("Enter a float number: \n");
	scanf("%f", &target);

	printf("%.2f\n", target);
	printf("%f\n", target);
	printf("%e\n", target);

	return 0;
}

int show_seconds(void) {
	const float S = 3.156e7;
	int age;
	float seconds;

	printf("Enter your age: ");
	scanf("%d", &age);

	seconds = age * S;

	printf("You have passed %e second in your life.\n", seconds);

	return 0;
}

int quart(void) {
	const float MOLECULE_WEIGHT = 3.0e-23;
	const int QUART_WEIGHT = 950;

	float num;
	printf("Please enter quart amount: ");
	scanf("%f", &num);

	double amount;
	amount = num * QUART_WEIGHT / MOLECULE_WEIGHT;

	printf("%.2f water contains %e water molecule.\n", num, amount);

	return 0;
}

int show_height(void) {
	const float FACTOR = 2.54;
	float height;
	printf("Please enter your height in inch: ");
	scanf("%f", &height);

	printf("You are %.2f inch, which is %.2f cm.\n", height, height * FACTOR);

	return 0;	
}
