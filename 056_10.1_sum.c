#include <stdio.h>

#define SIZE 10

int sum(int *, int);
int sump(int *, int *);

int main() {
	int test[SIZE] = {1,2,3,4,5,6,7,8,9, 10};
	// printf("sum of arr is %d\n", sum(test, sizeof(test) / sizeof(int)));

	// printf("size of test is %zd\n", sizeof(test));

	printf("sum of arr is %d\n", sump(test, test+SIZE));



	return 0;
}


int sum(int * arr, int n){
	int i;
	int res = 0;
	for (i = 0; i < n; i++) {
		res += *(arr+i);
	}
	printf("size of arr is %zd\n", sizeof(arr));
	return res;
}

int sump(int *start, int *end) {
	int res = 0;
	while (start < end) {
		res += *start++;
	}

	return res;
}



























