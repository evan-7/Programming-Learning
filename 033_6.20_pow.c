#include <stdio.h>

double power(double n, int p);

int main(void) {
	printf("%.2lf\n",power(20, 3));
	printf("%.2lf\n",power(2, 16));


	return 0;
}

double power(double n, int p) {
	int res = 1;
	for (int index = 0; index < p; index++) {
		res *= n;
	}


	return res;
}
