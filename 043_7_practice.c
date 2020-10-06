#include <stdio.h>

int main() {
	/*
	int num;
	for (num = 1; num <= 11; num ++) {
		if (num % 3 == 0) {
			putchar('$');
		} else {
			putchar('*');
			putchar('#');
			putchar('%');
		}
		// putchar('\n');
	}

	putchar('\n');
	*/

	/*
	int i = 0;
	while (i < 3) {
		switch (i++) {
			case 0:
				printf("fat");
			case 1:
				printf("hat");
			case 2:
				printf("cat");
			default:
				printf("Oh, no!");
		}
		putchar('\n');
	}
	*/

	/*
	int age = 20;
	while (age++ <= 65) {
		if (age % 20 == 0) {
			printf("You are %d, here is your raise.\n", age);
		}

		if (age == 65) {
			printf("You are %d, here is a gold watch.\n", age);
		}
	}
	*/


	/*
	char ch;
	int n_space = 0;
	int n_nextline = 0;
	int n_others = 0;

	printf(">>>");
	while ((ch = getchar()) != '#') {
		if (ch == ' ') {
			n_space++;
		} else if (ch == '\n') {
			n_nextline++;
		} else {
			n_others++;
		}
	}

	printf("space: %d; nextline: %d; other: %d\n", n_space, n_nextline, n_others);
	*/

	/*
	char ch;
	int count = 0;

	printf(">>>");
	while ((ch = getchar()) != '#') {
		count++;
		if (count % 8 != 0) {
			putchar(ch);
			putchar('\t');
		} else {
			putchar(ch);
			putchar('\n');
		}
	}
	*/

	/*	
	int n;
	int n_all = 0;
	int n_even = 0;
	int n_odd = 0;

	float average_even = 0.0l;
	float average_odd = 0.0l;
	float average_all = 0.0l;

	int sum_all = 0;
	int sum_even = 0;
	int sum_odd = 0;

	printf(">>>\n");

	while (scanf("%d", &n) == 1 && n != 0) {
		n_all++;
		sum_all += n;

		if (n % 2 == 0) {
			n_even++;
			sum_even += n;
		} else {
			n_odd++;
			sum_odd += n;
		}
	}
	
	average_all = (float) sum_all / n_all;
	average_odd = (float) sum_odd / n_odd;
	average_even = (float) sum_even / n_even;

	printf("n_all = %d; sum_all = %d; average_all = %.2f\n", n_all, sum_all, average_all);
	printf("n_even = %d; sum_even = %d; average_even = %.2f\n", n_even, sum_even, average_even);
	printf("n_odd = %d; sum_odd = %d; average_odd = %.2f\n", n_odd, sum_odd, average_odd);
	*/

	/*
	char ch;
	int count_1 = 0;
	int	count_2 = 0;

	printf(">>>\n");
	while ((ch = getchar()) != '#') {
		if (ch == '.') {
			ch = '!';
			count_1++;
		} else if (ch == '!') {
			ch = '!!';
			count_2++;
		}
	}
	printf("count_. = %d; count_! = %d\n", count_1, count_2);
	*/

	/*
	char ch;
	int count_1 = 0;
	int count_2 = 0;

	printf(">>>\n");
	while ((ch = getchar()) != '#') {
		switch (ch) {
			case '.':
				ch = '!';
				count_1++;
				break;
			case '!':
				ch = '!!';
				count_2++;
				break;
		}
	}
	printf("count_. = %d; count_! = %d\n", count_1, count_2);	
	*/

	/*
	char previous, current;
	int count = 0; 

	printf(">>>\n");

	while ((current = getchar()) != '#') {
		if (current == 'i' && previous == 'e') {
			count++;	
		}
		previous = current;
	}
	printf("%d\n", count);
	*/

	/*
	float hours;
	const float BASE = 1000.0f;
	float tax;
	float salary = 0.0f;

	printf("Enter your work hours in one week: ");
	scanf("%f", &hours);

	hours = (hours > 40) ? (hours + 1.5 * (hours - 40)) : hours;
	salary = BASE * hours;

	if (salary <= 300) {
		salary = 0.85 * salary;
	} else if (salary <= 450) {
		salary = 300 * 0.85 + (salary - 300) * 0.8;
	} else {
		salary = 300 * 0.85 + 150 * 0.8 + (salary - 450) * 0.75;
	}

	printf("salary = %.2f\n", salary);
	*/

	/*
	int n;
	printf(">>>");
	scanf("%d", &n);

	int flag = 0;
	for (int i = 2; i < n; i++) {
		for (int j = 2; j < i; j++) {
			if (i % j == 0) {
				flag++;
			}
		}

		if (flag == 0) {
			printf("%d\n", i);
		}

		flag = 0;
	}
	*/


	





	return 0;
}