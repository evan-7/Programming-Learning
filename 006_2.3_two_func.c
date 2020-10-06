# include <stdio.h>

void butler(void);

int main() {
	// printf("I will summon the butler function.\n");
	// butler();
	// printf("Yes, bring me some tea and writeable DVDs.\n");

	int a,
		b;
	a = 5;
	b = 2;

	b = a;
	a = b;

	printf("%d %d \n", b, a);


	return 0;
}

void butler(void){
	printf("You rang, sir?\n");
}