#include <stdio.h>
#define STRLEN 14

int main(void)
{
	char words[STRLEN];
	int i;
	puts("Please enter a string:");
	while(fgets(words, STRLEN, stdin) != NULL && words[0] != '\n') {
		//fputs(words, stdout);
		i = 0;
		while(words[i] != '\n' && words[i] != '\0') {
			i++;
		}
		if (words[i] == '\n') {
			words[i] = '\0';
		} else {
			while(getchar() != '\n') {
				continue;
			}
		}
		puts(words);
	}
	puts("done");
	return 0;
}
