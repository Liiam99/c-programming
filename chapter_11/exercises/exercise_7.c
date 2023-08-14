/*
 * Name: exercise_7.c
 * Purpose: Splits a day of the year into its equivalent month and day.
 * Author: L. Adam
 */

#include <stdio.h>

void split_date(int day_of_year, int year, int *month, int *day);

int main(void)
{
    int day_of_year;
    printf("Day of year: ");
    scanf("%d", &day_of_year);

    int year;
    printf("Year: ");
    scanf("%d", &year);

    int month, day;
    split_date(day_of_year, year, &month, &day);

    printf("%d %d\n", month, day);

    return 0;
}

void split_date(int day_of_year, int year, int *month, int *day)
{
    int days_in_month[12] = {
        31, 28, 31, 30,
        31, 30, 31, 31,
        30, 31, 30, 31
    };

    // Adjust days of February for leap years.
    if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
    {
        days_in_month[1] += 1;
    }


    int month_nr;
    for (month_nr = 0; month_nr < 12 && day_of_year > days_in_month[month_nr]; month_nr++)
    {
        day_of_year -= days_in_month[month_nr];
    } 

    *month = month_nr + 1;
    *day = day_of_year;
}

