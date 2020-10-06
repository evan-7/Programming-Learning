#include <stdio.h>

void show_arr(const int arr[], int size);
void max_in_arr(const int arr[], int size);
void max_index_in_arr(const int arr[], int size);
void reverse_arr(int arr[], int size);
void get_arr(void);

int main() {
	// int size;
	// int test[] = {8,4,10,20,11,88};

	// size = sizeof(test) / sizeof(int);

	// show_arr(test, size);
	// max_in_arr(test, size);
	// max_index_in_arr(test, size);

	// printf("Original array:\n");
	// show_arr(test, size);
	// printf("Reversed array:\n");
	// reverse_arr(test, size);
	// printf("Original array:\n");
	// show_arr(test, size);

	get_arr();






	return 0;
}


void show_arr(const int arr[], int size) {
	/* 输出数组 */
	
	int index;
	const int *ptr;

	for (index = 0, ptr = arr; index < size; index++, ptr++) {
		printf("%d-%d\t", arr[index], *ptr);
	}
	printf("\n");
}

void max_in_arr(const int arr[], int size) {
	/* 返回int数组中最大值 */
	
	int max;
	int index;

	max = arr[0];
	for (index = 1; index < size; index++) {
		if (max < arr[index]) {
			max = arr[index];
		}
	}
	printf("max = %d\n", max);
	
}

void max_index_in_arr(const int arr[], int size) {
	/* 返回int数组中最大值的下标 */

	int max;
	int index;
	int max_index;

	max = arr[0];
	for (index = 1; index < size; index++) {
		if (max < arr[index]) {
			max = arr[index];
		}
	}

	for (index = 0; index < size; index++) {
		if (max == arr[index]) {
			max_index = index;
		}
	}

	printf("max = %d; max_index = %d\n", max, max_index);
	
}

void reverse_arr(int arr[], int size) {
	int temp;
	int i,j;

	for (i = 0, j = size-1; i < j; i++, j--) {
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
	}

	for (i = 0; i < size; i++) {
		printf("%d\t", arr[i]);
	}

	printf("\n");
}

void get_arr(void) {
	int num;
	const int ROWS = 3;
	const int COLS = 5;
	int row, col;
	int n;

	int arr[ROWS][COLS];

	printf(">>>\n");
	n = scanf("%d", &num);
	while (n == 1) {
		for (row = 0; row < ROWS; row++) {
			for (col = 0; col < COLS; col++) {
				arr[row][col] = num;
				n = scanf("%d", &num);
			}
		}

	}


	for (row = 0; row < ROWS; row++) {
		for (col = 0; col < COLS; col++) {
			printf("%d\t", arr[row][col]);

		}
	}

	printf("\n");

}






