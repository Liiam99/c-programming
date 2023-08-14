/*
 * Name: project_2.c
 * Purpose: Asks user for a 24-hour time, then displays it in 12-hour form.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int hours, mins;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hours, &mins);
    
    char period[] = "AM"; 
    if (hours >= 12)
    {
        period[0] = 'P';

        if (hours > 12)
        {
            hours -= 12;
        }
    }
    else if (hours < 1)
    {
        hours = 12;
    }
    
    printf("Equivalent 12-hour time: %.2d:%.2d %s\n", hours, mins, period);

    return 0;
}

