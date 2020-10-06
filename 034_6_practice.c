#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

	/*
	// int value;
	double value;
	for (value = 36; value > 0; value /= 2) {
		printf("%3d\n", value);
	}
	*/

	/*
	for (int row = 0; row < 4; row++) {
		for (int col = 0; col < 8; col++) {
			printf("$");
		}
		printf("\n");
	}
	*/

	/*
	int i = 0;
	while (++i < 4) {
		printf("Hi!\n");
	}
	*/

	/*
	int i = 0;
	do {
		printf("%d\tBye!\n",i);
	} while (i++ < 8);
	*/

	/*
	int i;
	char ch;

	for (i = 0, ch = 'A'; i < 4; i++, ch += i*2) {
		printf("%c\n", ch);
	}
	*/

	/*
	char ch;
	scanf("%c", &ch);
	while (ch != 'g') {
		printf("%c", ch);
		scanf("%c", &ch);
	}
	*/

	/*
	char ch;
	scanf("%c", &ch);
	while (ch != 'g') {
		printf("%c", ++ch);
		scanf("%c", &ch);
	}
	*/

	/*
	char ch;
	do {
		scanf("%c", &ch);
		printf("%c", ch);
	} while (ch != 'g');
	*/

	/*
	char ch;
	scanf("%c", &ch);
	for (ch = '$'; ch != 'g'; scanf("%c", &ch)) {
		printf("%c", ch);
	}
	*/


	// int n, m;
	// n = 30;
	// while (++n <= 33) {
	// 	printf("%d ", n);   // 31 32 33
	// }

	// do {
	// 	printf("%d ", n);
	// } while (++n <= 33); // 30 31 32 33

	// for (n = 1; n*n < 200; n += 4) {
	// 	printf("%d\n", n);
	// }

	// for (n = 2, m = 6; n < m; n *= 2, m += 2) {
	// 	printf("%d\t%d\n", n, m);
	// }


	// for (n = 5; n > 0; n--) {
	// 	for (m = 0; m <= n; m++) {
	// 		printf("=");
	// 	}
	// 	printf("\n");
	// }

	/*
	char letters[26];
	for (int i = 0; i < 26; i++) {
		scanf("%c", &letters[i]);
	}

	for (int i = 0; i < 26; i++) {
		printf("%c\n", letters[i]);
	}
	*/

	/*
	int n;
	printf("Please enter value of n: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= i; j++) {
			printf("$");	
		}
		printf("\n");
	}
	*/

	/*
	char ch;
	printf(">>>");
	scanf("%c", &ch);

	for (int i = 1; i <= ch - 'A' + 1; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", ch-j);
		}
		printf("\n");
	}
	*/

	/*
	char ch;
	printf("Please enter char and row: ");
	scanf("%c", &ch);

	for (int i = 1; i <= ch+1-'A'; i++) {
		for (int col = 0; col < i; col++) {
			printf("%c", ch - col);
		}
		ch = ch - i;
		printf("\n");
	}
	*/

	/*
	char ch = 'A';
	for (int i = 1; i <= 6; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", ch+j);
		}
		printf("\n");
	}
	*/

	/*
	char ch;
	printf(">>> ");
	scanf("%c", &ch);
	printf("%c\n", 'A');

	int row = ch - 'A';
	for (int i = 1; i <= row; i++) {
		for (int j = 0; j < i; j++) {
			printf("%c", 'A' + j);
		}

		for (int j = i; j >= 0; j--) {
			printf("%c", 'A' + j);
		}
		printf("\n");
	}
	*/

	/*
	int start,
		end;
	printf("Enter the values of start and end: ");
	scanf("%d %d", &start, &end);

	for (int i = start; i <= end; i++) {
		printf("%d\t%ld\t%ld\n", i, i*i, i*i*i);
	}
	*/

	/*
	char str[] = "Hello world!";
	char a_str[strlen(str)];


	for (int i = 0; i < strlen(str); i++) {
		a_str[i] = str[i];
	}

	for (int i = 0; i < strlen(a_str); i++) {
		printf("%c", a_str[i]);
	}
	printf("\n");
	for (int i = strlen(a_str); i >= 0; i--) {
		printf("%c", a_str[i]);
	}
	*/

	/*
	int min,
		max;
	printf("Enter min and max:");
	int n = scanf("%d %d", &min, &max);

	while (n == 2 && min <= max) {
		for (int i = min; i <= max; i++) {
			printf("%d\t%d\n", i, i*i);
		}
		printf("\n");

		printf("Enter min and max:");
		int n = scanf("%d %d", &min, &max);
	}
	*/

	/*
	int a_num[8];

	printf(">>>\n");
	for (int i = 0; i < 8; i++) {
		scanf("%d", &a_num[i]);
	}

	for (int i = 0; i < 8; i++) {
		printf("%d\n", a_num[7 - i]);
	}
	*/

	/*
	int n;
	double seq1,
		seq2;

	printf("Enter n: ");
	scanf("%d", &n);

	while (n > 0) {
		for (int i = 1; i <= n; i++) {
			seq1 += 1.0 / i;
			seq2 += 1.0 * pow(-1, i-1) / i;
		}

		printf("seq1 = %lf; seq2 = %lf\n", seq1, seq2);
		printf("Enter n:  ");
		scanf("%d", &n);
	}	
	*/

	/*
	int num[8];
	for (int i = 0; i < 8; i++) {
		num[i] = pow(2, i);
	}

	for (int i = 0; i < 8; i++) {
		printf("%d---%d\n", i, num[i]);
	}
	*/

	/*
	double first[8];
	double second[8];
	double res = 0;

	printf("Enter: ");
	for (int i = 0; i < 8; i++) {
		scanf("%lf", &first[i]);
	}

	for (int i = 0; i < 8; i++) {
		res += first[i];
		second[i] = res;
	}

	for (int i = 0; i < 8; i++) {
		printf("first[%d]\t%lf; second[%d]\t%lf\n", i, first[i], i, second[i]);
	}
	*/

	/*
	char str[255];
	printf(">>>\n");

	scanf("%s", str);
	int size = strlen(str) - 1;

	for (int i = size; i >= 0; i--) {
		printf("%c", str[i]);
	}
	printf("\n");
	*/

	/*	
	float Daphne_money = 100;
	float Deirdre_money = 100;
	int year = 0;

	while (Deirdre_money <= Daphne_money) {
		year++;
		Daphne_money = 100 + 0.1 * 100 * year;
		Deirdre_money *= 1.05;
		printf("Daphne_money = %.2f; Deirdre_money = %.2f; year = %d\n",
		Daphne_money, Deirdre_money, year);
	}
	*/
	

	/*
	double money = 1000000;
	int year = 0;
	while (money > 0) {
		printf("money = %.2lf; year = %d\n", money, year);
		year++;
		money = money * 1.08 - 100000;
	}
	*/

	/*
	int number = 5;
	int count = 0;
	while (number <= 150) {
		printf("number = %d; count = %d\n", number, count);
		count++;
		number = (number - 1) * 2;
	}
	*/

	return 0;
}