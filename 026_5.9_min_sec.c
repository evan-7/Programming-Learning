#include <stdio.h>

#define SEC_PER_MIN 60

int main() {

	
	int sec, min, left;

	printf("Convert seconds to minutes and seconds.\n");

	printf("Please enter the seconds: ");
	scanf("%d", &sec);

	while (sec > 0) {
		min = sec / SEC_PER_MIN;
		left = sec % SEC_PER_MIN;

		printf("%d seconds is %d minutes and %d seconds.\n", sec, min, left);

		printf("Please enter the seconds: ");
		scanf("%d", &sec);
	}
	printf("Done!\n");
	


	// int index = 0;
	// while (index++ < 11) {
	// 	printf("%d\n", index);
	// }





	return 0;
}