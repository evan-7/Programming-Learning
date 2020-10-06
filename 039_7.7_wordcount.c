#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

#define STOP '|'

int main() {
	char c;
	char prev;
	long n_char = 0l;
	int n_line = 0;
	int n_word = 0;
	int p_line = 0;
	bool inword = false;

	printf("Enter next to be analyzied(| to terminate):");
	prev = '\n';

	while ((c = getchar()) != STOP) {
		n_char++;

		if (c == '\n') {
			n_line++;
		}

		if (!isspace(c) && !inword) {
			inword = true;
			n_word++;
		}

		if (isspace(c) && inword) {
			inword = false;
			prev = c;
		}

		if (prev != '\n') {
			p_line = 1;
		}
	}

	printf("characters = %ld; words = %d; lines = %d\n", n_char, n_word, n_line);
	printf("partial lines = %d\n", p_line);

	return 0;
}