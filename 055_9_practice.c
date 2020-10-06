#include <stdio.h>
#include <ctype.h>


void salami(int);
int max(int, int, int);
void menu(void);
int input(int, int);
double aver(double, double);


double min(double, double);
void chline(char, int, int);
void large_of(double *, double *);
void show_letter_pos(void);
int judge_letter(char);
void to_base_n(int, int);


int main() {
	// salami(10);
	// printf("max = %d\n", max(1200, 200, 89));

	// menu();
	// int i = input(1, 4);
	// // input(3, 5);
	// printf("%d\n", i);

	// printf("min = %lf\n", min(12, 32));

	// chline('*', 3, 10);

	// printf("%lf", aver(3, 8));

	/*
	double x = 5,
		y = 3;
	printf("x = %lf; y = %lf\n", x, y);
	large_of(&x, &y);
	printf("x = %lf; y = %lf\n", x, y);
	*/

	// show_letter_pos();

	// printf("%d\n", 'h' - 'a' + 1);

	/*
    to_base_n(8, 2);
    putchar('\n');
    to_base_n(9, 2);
    putchar('\n');

    to_base_n(129, 8);
    putchar('\n');

    to_base_n(137, 8);
    putchar('\n');
	*/



	





	return 0;
}

void salami(int n) {
	int i;
	for (i = 1; i <= n; i++) {
		printf("O salami mio-->%d\n", i);	
	}

}

int max(int a, int b, int c) {
	int max;
	if (a > b) {
		if (a > c) {
			max = a;
		} else {
			max = c;
		}
	} else {
		if (b > c) {
			max = b;
		} else {
			max = c;
		}
	}

	return max;
}

void menu(void) {
	// int n;
	printf("Please choose one of the followings:\n");
	printf("1) copy files\t\t2) move files\n");
	printf("3) remove files\t\t4) quit\n");

	// while (scanf("%d", &n) == 1 && n != 4) {
	// 	printf("Please choose one of the followings:\n");
	// 	printf("1) copy files\t\t2) move files\n");
	// 	printf("3) remove files\t\t4) quit\n");
	// }
}

int input(int min, int max) {
	int n;
	while (scanf("%d", &n) == 1 && isdigit(n)) {
		if (n < min || n > max) {
			menu();
		} else {
			return n;
		}

	}

	if (!isdigit(n)) {
		return 4;
	}
}

double min(double a, double b) {
	return ((a) < (b) ? a : b);
}

void chline(char ch, int i, int j) {
	int row, col;
	for (row = 0; row < i; row++) {
		for (col = 0; col < j; col++) {
			printf("%c", ch);
		}
		printf("\n");
	}
}


double aver(double a, double b) {
	double temp, res;
	temp = (1.0/a + 1.0/b) / 2;
	res = 1.0 / temp;

	return res;
}

void large_of(double *a, double *b) {
	double max;
	max = ((*a) > (*b) ? (*a) : (*b));
	*a = max;
	*b = max;
}

int judge_letter(char ch) {
	char cha;
	cha = tolower(ch);

	if (isalpha(cha)) {
		return (cha - 'a' + 1);
	} else {
		return -1;
	}
}

void show_letter_pos(void) {
	printf(">>> ");
	char ch;
	int res;
	while ((ch = getchar()) != '\n') {
		if (judge_letter(ch) > 0) {
			res = judge_letter(ch);
			printf("%d ", res);
		} else {
			printf("%c ", '&');
		}
	}
	printf("\n");

}

void to_base_n(int num, int base) {
	int r;
	r = num % base;
	if (num >= base) {
		to_base_n(num / base, base);
	}
	putchar((r == 0 ? '0' : r +'0'));
}








