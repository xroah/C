#include <stdio.h>

int main(void)
{
    int arr1[] = {1, 2, 3};
    int arr2[5] = {4, 5, 6};
    int arr3[6] = {[1] = 9, [5] = 10};
    int arr4[5];
    float arr5[] = {10.0, [6] = 60.0};


    printf("arr1:\n");
    for (int i = 0, size = sizeof(arr1) / sizeof(arr1[0]); i < size; i++)
    {
        printf("arr1[%d]=%d;\n", i, arr1[i]);
    }

    printf("arr2:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr2[%d]=%d;\n", i, arr2[i]);
    }

    printf("arr3:\n");
    for (int i = 0; i < 6; i++)
    {
        printf("arr3[%d]=%d;\n", i, arr3[i]);
    }

    printf("arr4:\n");
    for (int i = 0; i < 5; i++)
    {
        printf("arr4[%d]=%d;\n", i, arr4[i]);
    }

    printf("arr4:\n");
    for (int i = 0, size = sizeof(arr5) / sizeof(arr5[0]); i < size; i++)
    {
        printf("arr5[%d]=%f;\n", i, arr5[i]);
    }

    return 0;
}