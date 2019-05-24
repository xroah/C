#include <stdio.h>
#include <time.h>

int main(void)
{
    struct tm date = {
        .tm_mday = 1,
        .tm_mon = 4,
        .tm_year = 2018
    };
    time_t time = mktime(&date);
    struct tm * _date = gmtime(&time);
    printf("week=%d", _date->tm_wday);
}
