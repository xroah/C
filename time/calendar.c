#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define DAYS 42

int *get_days(int, int);
int is_leap_year(int);

int main(int argc, char *argv[]) 
{
    if (argc < 3) {
        printf("Error.\n");
        exit(EXIT_FAILURE);
    }
    int year = atoi(argv[1]);
    int mon = atoi(argv[2]);
    if (year <= 1900 || mon <= 0 || mon > 12) {
        printf("Year or month is illegal.\n");
        exit(EXIT_FAILURE);
    }
    mon -= 1;
    int *arr = get_days(year, mon);
    //printf("year=%d, mon=%d\n", year, mon);
    printf("%4s %4s %4s %4s %4s %4s %4s\n", "Sun", "Mon", "Tue", "Wed", "Thu", "Fri", "Sat");
    for (int i = 0; i < DAYS; i++) {
        if (i > 0 && i % 7 == 0) {
            printf("\n");
        }
        if (arr[i]) {
            printf("%4d ", arr[i]);
        } else {
            printf("%4s ", "");
        }
    }
    free(arr);
}

int *get_days(int year, int mon) 
{
    int mon_days[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int *arr = (int*) malloc(DAYS * sizeof(int));
    for (int i = 0; i < DAYS; i++) {
        arr[i] = 0;
    }
    if (is_leap_year(year)) {
        mon_days[1] = 29;
    }
    struct tm date = {
        .tm_year = year,
        .tm_mon = mon,
        .tm_mday = 1
    };
    time_t time = mktime(&date);
    struct tm *_date = gmtime(&time);
    int week_day = _date -> tm_wday;
    for (int i = 0; i < mon_days[mon]; i++) {
        arr[week_day + i] = i + 1; 
    }
    return arr;
}

int is_leap_year(int year) 
{
    return (year % 4 == 0 && year % 100 != 0) || year % 400 == 0;
}


