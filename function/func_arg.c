#include <stdio.h>
#define SIZE 5

void forEach(void *, int, void (*)(void *, int));
void loop(void *, int);

int main(void)
{
    int arr[SIZE] = {12, 234, 32, 45, 57};
    forEach(arr, SIZE, loop);
    return 0;
}

void forEach(void *arr, int size, void (*fn)(void *, int))
{
    int *array = (int *) arr;
    for (int i = 0; i < size; i++) {
        fn(&array[i], i);
    }
}

void loop(void * pt, int index) {
    int *val = (int *) pt;
    printf("index=%d, val=%d\n", index, *val);
}

