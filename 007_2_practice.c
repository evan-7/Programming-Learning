#include <stdio.h>

void jolly(void);
void deny(void);
void toes_count(void);
void one(void);
void two(void);
void three(void);

int main() {
	/*
	jolly();
	jolly();
	jolly();

	deny();
	*/

	/*
	toes_count();
*/

	printf("starting now:\n");
	one();
	two();
	three();
	printf("done\n");


	return 0;
}

void jolly(void) {
	printf("For he`s a jolly good fellow.\n");
}

void deny() {
	printf("Which nobody can deny.\n");
}

void toes_count() {
	int toes = 10;
	printf("%d\n", toes * 2);
	printf("%d\n", toes * toes);

}

void one(void) {
	printf("one\n");
}

void two(void) {
	printf("two\n");
}

void three(void) {
	printf("three\n");
}

















