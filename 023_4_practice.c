#include <stdio.h>
#include <string.h>
#include <float.h>

#define Q "His hamlet was funny without being vuglar."
#define BOOK "War and Peace"

int main(){
	/*
	printf("He sold the painting for $%2.2f.\n", 2.345e2);
	printf("%c%c%c\n", 'H', 105, '\41');
	printf("\"%s\"\nhas %lu characters.\n", Q, strlen(Q));
	printf("Is %2.2e tha same with %2.2f?\n", 1201.0, 1201.0);
	*/

	/*
	float cost = 12.99;
	float percent = 80.0;

	printf("The copy of %s sells for $%.2f.\nThat is %.f%% of list.", BOOK, cost, percent);
	*/

	/*
	printf("%#4X\n", 0x8A);
	printf("%10.3f\n", 232.346);
	printf("%12.3e\n", 2.33e002);
	printf("%-30s\n", "Hello");
	printf("%30s\n", "Hello");
	*/

	/*
	float b;
	printf(">>> ");
	scanf("%f", &b);
	printf("%e\n", b);
	*/

	/*
	char str[20];
	printf(">>> ");
	scanf("%s", str);
	printf("%s\n", str);
	*/

	/*
	char str[20];
	printf(">>> ");
	scanf("%[^\n]", str);
	printf("%s\n", str);
	*/

	/*
	char str[20];
	printf(">>> ");
	scanf("%s", str);
	scanf("%s", str);
	printf("%s\n", str);
	*/

	/*
	char first_name[20];
	char last_name[20];

	printf("Please enter your first name and last name:\n");
	scanf("%s,%s", first_name, last_name);

	printf("%s,%s\n", first_name, last_name);
	*/

	/*
	char first_name[20];
	char last_name[20];

	printf("Please enter your first_name:\n");
	scanf("%s", first_name);
	printf("Please enter your last_name:\n");
	scanf("%s", last_name);

	printf("%s %s\n", first_name, last_name);
	printf("%*d %*d\n", strlen(first_name),strlen(first_name), strlen(last_name),strlen(last_name));
	*/

	/*
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;

	printf("double : %lf; float: %f\n", d, f);
	printf("double : %.12lf; float : %.12f\n", d, f);
	printf("double : %.16lf; float : %.16f\n", d, f);

	printf("FIT_DIG : %f; DBL_DIG : %f\n", d, f);
	*/

	return 0;
}