#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{
    const char str[] = "哈哈哈哈哈哈哈";
    FILE *fp = fopen("./test.txt", "w");
    if (fp == NULL) {
        puts("Error");
        exit(EXIT_FAILURE);
    }
    /*
    int len = strlen(str);
    for (int i = 0; i < len; i++) {
        char c = str[i];
        putc(c, fp);
    }
    */
    fputs(str, fp);
    puts("Write sucessfully!");
    fclose(fp);
    return 0;
}
