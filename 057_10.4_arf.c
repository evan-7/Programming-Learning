#include <stdio.h>

#define SIZE 5

void show_arr(const double arr[], int n);
void mult_arr(double arr[], int n, double m);

int main() {
	
	double piz[SIZE] = {
		20.0, 17.66, 8.2, 15.3, 22.22
	};
	
	printf("The original dip array is :\n");
	show_arr(piz, SIZE);

	mult_arr(piz, SIZE, 2.5);

	printf("The diz array after calling mult_arr is :\n");
	show_arr(piz, SIZE);


	return 0;
}

void show_arr(const double arr[], int n) {
	int i;
	for (i = 0; i < n; i++) {
		printf("%.2lf\n", arr[i]);
	}
}

void mult_arr(double arr[], int n, double m) {
	int i;
	for (i = 0;i < n; i++) {
		arr[i] *= m;
	}
}