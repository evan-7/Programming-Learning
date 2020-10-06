# include <stdio.h>

int main() {
	unsigned int un = 3000000000;
	short end = 200;
	long big = 65537;
	long long veryBig = 12345678908642;

	printf("un is %u not %d\n", un, un);
	printf("end is %hd and %d\n", end, end);
	printf("big is %ld not %hd\n", big, big);
	printf("veryBig is %lld not %d\n", veryBig, veryBig);

	return 0;
}