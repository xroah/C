#include <stdio.h>

inline static int tail_factorial(int n, int a)
{
    if (n < 0)
    {
        return 0;
    } else if (n == 0)
    {
        return 1;
    } else if (n == 1)
    {
        return a;
    }
    return tail_factorial(n - 1, n * a);
}

int main(void)
{
    printf("6!=%d\n", tail_factorial(6, 1));
    return 0;
}
