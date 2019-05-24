#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int ch;
    FILE *fp = fopen("./3.0.css", "r");
    if (fp == NULL) {
        printf("Failure.\n");
        exit(EXIT_FAILURE);
    }
    while((ch = getc(fp)) != EOF) {
        putc(ch, stdout);
    }
    fclose(fp);
    return 0;
}
