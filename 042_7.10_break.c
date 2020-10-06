#include <stdio.h>

int main() {
	float width;
	float height;
	float area;

	printf("Please enter width: ");
	while (scanf("%f", &width) == 1) {
		printf("Please enter height: ");
		while (scanf("%f", &height) == 1) {
			printf("width = %.2f\n", width);
			printf("height = %.2f\n", height);
			area = (width + height) * 2;
			printf("area = %.2f\n", area);
			break;
		}
		printf("Please enter width: ");
	}





	return 0;
}