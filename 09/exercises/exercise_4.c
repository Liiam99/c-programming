/*
 * Name: exercise_4.c
 * Purpose: Returns the day of the year based on the given date.
 * Author: L. Adam
 */

#include <stdio.h>

int day_of_year(int, int, int);

int main(void)
{
    printf("%d\n", day_of_year(12, 16, 2016));

    return 0;
}

int day_of_year(int month, int day, int year)
{
    int day_nr = day;

    switch (month - 1)
    {
        case 11:
            day_nr += 30;
            __attribute__((fallthrough));
        case 10:
            day_nr += 31;
            __attribute__((fallthrough));
        case 9:
            day_nr += 30;
            __attribute__((fallthrough));
        case 8:
            day_nr += 31;
            __attribute__((fallthrough));
        case 7:
            day_nr += 31;
            __attribute__((fallthrough));
        case 6:
            day_nr += 30;
            __attribute__((fallthrough));
        case 5:
            day_nr += 31;
            __attribute__((fallthrough));
        case 4:
            day_nr += 30;
            __attribute__((fallthrough));
        case 3:
            day_nr += 31;
            __attribute__((fallthrough));
        case 2:
            day_nr += 28;
            __attribute__((fallthrough));
        case 1:
            day_nr += 31;
            break;
    }

    // Leap year.
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0) && month > 2)
    {
        day_nr += 1;
    }

    return day_nr;
}

