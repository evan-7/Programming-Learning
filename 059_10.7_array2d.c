#include <stdio.h>

#define ROWS 3
#define COLS 4

void sum_rows(int arr[][COLS], int row);
void sum_cols(int [][COLS], int row);
int sum_total(int arr[][COLS], int row);
int sum_arr(int rows, int cols, int arr[rows][cols]);

int main(){

	int junk[ROWS][COLS] = {
		{
			2,4,6,8
		},{
			3,5,7,9
		},{
			12,10,8,6
		}
	};

	sum_rows(junk, 3);
	sum_cols(junk, 3);

	printf("Sum of total is %d\n", sum_total(junk, 3));

	printf("Sum of new total is %d\n", sum_arr(ROWS, COLS, junk));

	return 0;
}


void sum_rows(int arr[][COLS], int row) {
	int i, j;
	int total;
	for (i = 0;i < row; i++) {
		total = 0;
		for (j = 0; j < COLS; j++){
			total += arr[i][j];
		}

		printf("sum of row %d is %d.\n", i, total);
	}
}

void sum_cols(int arr[][COLS], int row) {
	int i, j;
	int total;
	for (i = 0; i < COLS; i++){
		total = 0;
		for (j = 0; j < row; j++){
			total += arr[j][i];
		}

		printf("sum of column %d is %d\n", i, total);
	}
}

int sum_total(int arr[][COLS], int row) {
	int i,j;
	int total;
	total = 0;

	for (i = 0; i < row; i++){
		for (j = 0; j < COLS; j++){
			total += arr[i][j];
		}
	}

	return total;
}

int sum_arr(int rows, int cols, int arr[rows][cols])
{
	int row, col;
	int total = 0;

	for (row = 0; row < rows; row++) {
		for (col = 0; col < cols; col++) {
			total += arr[row][col];
		}
	}

	return total;
}







