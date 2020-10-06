#include <stdio.h>

int main() {
	float inch,
		cm;
	printf("Please enter the value of inch: \n");
	scanf("%f", &inch);

	cm = inch * 25.4;
	printf("%.2f inch = %.2f cm\n", inch, cm);

	return 0;
}