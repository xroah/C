#include<stdio.h>
#include<string.h>
#define SIZE 90

char *s_getS(char *, int);

int main(void) {
    char flower[SIZE] = "flower";
    char addon [] = "s smell like old shoes";
    strcat(flower, addon);
    puts(flower);
}
