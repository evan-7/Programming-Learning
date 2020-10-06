#include <stdio.h>

int lfact(int);
int rfact(int);

int main() {
	int num;
	printf("Enter number:\n");
	while (scanf("%d", &num)) {
		printf("%d-->loop fact %d\n", num, lfact(num));
		printf("%d-->recursion fact %d\n", num, rfact(num));
		printf("Enter number:\n");
	}

	return 0;
}

int lfact(int n) {
	int res = 1;
	for (int i = 1; i <= n; i++) {
		res *= i;
	}

	return res;
}

int rfact(int n) {
	if (n == 1 || n == 0) {
		return 1;
	}
	return n * rfact(n - 1);
}