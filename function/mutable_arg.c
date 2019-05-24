#include <stdio.h>
#include <stdarg.h>

int sum(int, ...);

int main(void)
{
    printf("sum1=%d\n", sum(1, 2));
    printf("sum2=%d\n", sum(2, 3, 3));
    printf("sum3=%d\n", sum(3, 2, 5, 10));
    printf("sum4=%d\n", sum(4, 10, 12, 15, 18));
    printf("sum5=%d\n", sum(5, 39, 32, 232, 23, 234));
    return 0;
}

int sum(int n, ...)
{
    int sum = 0;
    va_list args;
    va_start(args, n);
    for (int i = 0; i < n; i++)
    {
        sum += va_arg(args, int);
    }
    va_end(args);
    return sum;
}