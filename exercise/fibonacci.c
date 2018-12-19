#include <stdio.h>
#include <stdlib.h>

int fibonacci(unsigned int);

int main(int argc, char *argv[])
{
    if (argc == 1) {
        return 0;
    }
    int ret = fibonacci(atoi(argv[1]));
    /*printf("argc=%d\n", argc);
    for (int i = 0; i < argc; i++) {
        printf("argv[%d]=%s\n", i, argv[i]);
    }*/
    printf("%d\n", ret);
    return 0;
}

int fibonacci(unsigned int n) {
    int ret = 1;
    int i = 2;
    int j = 1;
    int k = 1;
    if (n > 2) {
        while(i < n) {
            ret = j + k;
            j = k;
            k = ret;
            i++;
        };
    }
    return ret;
}
