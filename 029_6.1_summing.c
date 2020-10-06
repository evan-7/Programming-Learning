#include <stdio.h>

int main(void) {
	long num;
	long sum = 0L;
	int status;

	printf("Please enter an integer to be summed \n");
	printf("(q to quit) : ");
	
	/*
	status = scanf("%ld", &num); // 读取到满足条件的个数

	while (status == 1) {
		sum += num;
		printf("Please enter next integer(q to quit): ");
		status = scanf("%ld", &num); // 读取到满足条件的个数
	}
	*/


	while (scanf("%ld", &num) == 1) {
		sum += num;
		printf("Please enter next integer(q to quit): ");
	}


	printf("sum = %ld\n", sum);

	return 0;
}