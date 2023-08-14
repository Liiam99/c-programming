/*
 * Name: project_9.c
 * Purpose: Converts given time from 12-hour time to 24-hour time.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int main(void)
{
    int hours, mins;
    char time_of_day;

    printf("Enter a 12-hour time: ");
    scanf("%d:%d %c", &hours, &mins, &time_of_day);

    time_of_day = toupper(time_of_day);
    if (time_of_day == 'P')
    {
        hours += 12;
    }

    printf("Equivalent 24-hour time: %.2d:%d\n", hours, mins);

    return 0;
}

