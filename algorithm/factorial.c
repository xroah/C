#include <stdio.h>

inline static int factorial(int n) 
{
    if (n < 0) 
    {
        return 0;
    } else if (n <= 1)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main(void)
{
    printf("6!=%d\n", factorial(6));
    return 0;
}

