#include <stdio.h>
#include <stdlib.h>

#define ROW 3
#define COLUMN 5

int *perAverage(int (*)[COLUMN], int);
int average(int (*)[COLUMN], int);
int max(int (*)[COLUMN], int);

int main(void)
{
    int arr[ROW][COLUMN];
    int *perAvg;
    int avg;
    int maxNum;
    int i = 0;
    while (i < ROW)
    {
        printf("请输入第%d组数据(使用逗号分隔):\n", i + 1);
        scanf("%d, %d, %d, %d, %d", arr[i], arr[i] + 1, arr[i] + 2, arr[i] + 3, arr[i] + 4);
        i++;
    }
    perAvg = perAverage(arr, ROW);
    avg = average(arr, ROW);
    maxNum = max(arr, ROW);
    printf("每组平均数为: %d, %d, %d\n", perAvg[0], perAvg[1], perAvg[2]);
    printf("平均数为: %d\n", avg);
    printf("最大数为: %d\n", maxNum);
    free(perAvg);
    return 0;
}

int *perAverage(int arr[][COLUMN], int row)
{
    int *ret = malloc(sizeof(int) * 3);
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < COLUMN; j++)
        {
            sum += arr[i][j];
        }
        ret[i] = (int)sum / COLUMN;
    }
    return ret;
}

int average(int arr[][COLUMN], int row)
{
    int ret = 0;
    int count = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            ret += arr[i][j];
            count += 1;
        }
    }
    return (int)ret / count;
}

int max(int arr[][COLUMN], int row)
{
    int ret = 0;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < COLUMN; j++)
        {
            if (ret < arr[i][j]) {
                ret  = arr[i][j];
            }
        }
    }
    return ret;
}
