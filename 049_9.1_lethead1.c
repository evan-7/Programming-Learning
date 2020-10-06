#include <stdio.h>

#define SIZE 40

void starbar(void);

int main(){
	starbar();
	printf("content...\n");
	starbar();



	return 0;
}


void starbar(void) {
	for (int i = 0; i < SIZE; i++) {
		printf("*");
	}
	printf("\n");
}


