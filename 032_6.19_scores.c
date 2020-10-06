#include <stdio.h>

#define SIZE 10
#define PAR 72

int main(void) {

	int index, sum,
		scores[SIZE];
	float average;

	printf("Enter %d golf scoress:\n", SIZE);
	for (index = 0; index < SIZE; index++) {
		scanf("%d", &scores[index]);			
	}	

	printf("The scores read in are as follows:\n");
	for (index = 0; index < SIZE; index++)	{
		printf("%5d", scores[index]);
	}

	printf("\n");

	sum = 0;
	for (index = 0; index < SIZE; index++) {
		sum += scores[index];
	}

	average = (float) sum / SIZE;

	printf("Sum of scores = %d; average = %.2f\n", sum, average);
	printf("That is a handicap of %.f.\n", average - PAR);

	return 0;
}