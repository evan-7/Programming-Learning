#include <stdio.h>

int main() {
	const float MIN = 0.0f;
	const float MAX = 100.0f;

	float score;
	float total = 0.0l;
	int n = 0; 

	float min = MAX;
	float max = MIN;

	printf("Enter your score:");
	while (scanf("%f", &score) == 1) {
		if (score < MIN || score > MAX) {
			printf("Invalid scoure.\n");
			continue;
		}

		printf("Accepting score %f.\n", score);
		n++;
		total += score;

		min = (score < min) ? score : min;
		max = (score > max) ? score : max;

		printf("Enter your score:");
	}

	if (n > 1) {
		printf("min is %.2f; max is %.2f; average is %.2f.\n", min, max, total / n);
	} else {
		printf("No valid data entered.\n");
	}

	return 0;
}