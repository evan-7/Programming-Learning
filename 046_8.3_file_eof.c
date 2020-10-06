#include <stdio.h>
#include <stdlib.h>

int main() {
	int ch;
	FILE *fp;

	char file_name[50];
	printf("Enter the name of file: ");
	scanf("%s", file_name);

	fp = fopen(file_name, "r");

	if (fp == NULL) {
		printf("Invalid file.\n");
		exit(1);
	}

	while ((ch = getc(fp)) != EOF) {
		putchar(ch);
	}

	fclose(fp);


	return 0;
}