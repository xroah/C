#include <stdio.h>
#include <stdbool.h>

int sortFunc(int, int);
void sort(int *, int, int (*)(int, int), bool);

int main(void) 
{
    int arr[] = {1, 20, 3, 49, 23, 39, 21, 430, 12, 20, 3, 100};
    sort(arr, sizeof(arr)/sizeof(int), sortFunc, false);
    return 0;
}

void sort(int *arr, int len, int (*fp)(int, int), bool isDesc) 
{
    for (int i = 0; i < len - 1; i++) 
    {
        for (int j = i + 1; j < len; j++)
        {
            if ((isDesc && fp(arr[i], arr[j]) < 0) || (!isDesc && fp(arr[i], arr[j]) > 0))
            {
                int tmp = arr[i];
                arr[i] = arr[j];
                arr[j] = tmp;
            }
        }
    }
    for (int i = 0; i < len; i++) 
    {
        printf("arr[%d]=%d.\n", i, arr[i]);
    }
}

int sortFunc(int a, int b) 
{
    return a - b;
}
