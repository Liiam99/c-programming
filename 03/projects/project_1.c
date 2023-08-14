/*
 * Name: project_1.c
 * Purpose: Accepts formatted date as input and displays date differently.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int day, month, year;

    printf("Enter a date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("You entered the date %d%.2d%.2d\n", year, month, day);
    
    return 0;
}

