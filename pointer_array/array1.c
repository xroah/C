#include <stdio.h>
#define MONTHS 12

int isLeapYear(int);

int main(void) {
    int days[MONTHS] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(2018)) {
        days[1] = 29;
    } else {
        days[1] = 28;
    }
    int i;
    for (i = 0; i < MONTHS; i++) {
        printf("%d月天数: %d天\n", i + 1, days[i]);
    }
    printf("i=%d\n", i);
    return 0;
}

int isLeapYear(int year) {
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}