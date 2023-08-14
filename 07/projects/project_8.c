/*
 * Name: project_8.c
 * Purpose: Asks user to enter a time, then displays times of earliest flight.
 * Author: L. Adam
 */

#define MAX_TIME 60*24
#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
int calc_total_mins(int hours, int mins, char period);

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

    int total_mins = hours*60 + mins;
    
    // Converts departure times from 12-hour format to mins since midnight.
    int d1 = calc_total_mins(8, 0, 'A'), 
        d2 = calc_total_mins(9, 43, 'A'),
        d3 = calc_total_mins(11, 19, 'A'),
        d4 = calc_total_mins(12, 47, 'P'),
        d5 = calc_total_mins(2, 0, 'P'),
        d6 = calc_total_mins(3, 45, 'P'),
        d7 = calc_total_mins(7, 0, 'P'),
        d8 = calc_total_mins(9, 45, 'P');

    printf("Closest departure time is ");
    if (abs(total_mins - d1) < abs(total_mins - d2))
    {
        // Given time might be closer to the latest evening time than
        // earliest morning time.
        if (abs(total_mins - d1) < MAX_TIME - abs(total_mins - d8)) 
        {
            printf("8:00 a.m., arriving at 10:16 a.m.\n");
        }
        else
        {
            printf("9:45 p.m., arriving at 11:58 p.m.\n");
        }
    }
    else if (abs(total_mins - d2) < abs(total_mins - d3))
    {
        printf("9:43 a.m., arriving at 11:52 a.m.\n");
    }
    else if (abs(total_mins - d3) < abs(total_mins - d4))
    {
        printf("11:19 a.m., arriving at 1:31 p.m.\n");
    }
    else if (abs(total_mins - d4) < abs(total_mins - d5))
    {
        printf("12:47 p.m., arriving at 3:00 p.m.\n");
    }
    else if (abs(total_mins - d5) < abs(total_mins - d6))
    {
        printf("2:00 p.m., arriving at 4:08 p.m.\n");
    }
    else if (abs(total_mins - d6) < abs(total_mins - d7))
    {
        printf("3:45 p.m., arriving at 5:55 p.m.\n");
    }
    else if (abs(total_mins - d7) < abs(total_mins - d8))
    {
        printf("7:00 p.m., arriving at 9:20 p.m.\n");
    }
    else
    {
        printf("9:45 p.m., arriving at 11:58 p.m.\n");
    }

    return 0;
}

int calc_total_mins(int hours, int mins, char period)
{
    if (period == 'P' && hours != 12)
    {
        hours += 12;
    }
    else if (hours == 12 && period == 'A')
    {
        hours -= 12;
    }

    int total_mins = hours*60 + mins;

    return total_mins;
}

