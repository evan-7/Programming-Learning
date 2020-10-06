#include <stdio.h>
#include <math.h>

int main() {

	/*
	int index = 1;
	while (index < 21) {
		printf("%2d\t%3d\n", index, index*index);
		index += 1;
	}
	*/

	
	int index = 0;
	long long sum = 0;
	long long current = 0;
	while (index < 65) {
		current = pow(2, index);
		sum += current;
		index += 1;
		printf("%2d\t%20lld\t%20lld\n", index, current, sum);
	}
	printf("sum = %lld\n", sum);
	

	return 0;
}