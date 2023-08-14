/*
 * Name: project_4.c
 * Purpose: Converts wind speed to corresponding Beaufort description.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    float wind_speed_raw;
    printf("Enter a wind speed (in knots): ");
    scanf("%f", &wind_speed_raw);

    int wind_speed = round(wind_speed_raw);
    if (wind_speed < 1)
    {
        printf("Calm\n");
    }
    else if (wind_speed <= 3)
    {
        printf("Light air\n");
    }
    else if (wind_speed <= 27)
    {
        printf("Breeze\n");
    }
    else if (wind_speed <= 47)
    {
        printf("Gale\n");
    }
    else if (wind_speed <= 63)
    {
        printf("Storm\n");
    }
    else
    {
        printf("Hurricane\n");
    }

    return 0;
}

