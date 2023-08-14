/*
 * Name: exercise_15.c
 * Purpose: Calculates the median of three values.
 * Author: L. Adam
 */

#include <stdio.h>

double median(double x, double y, double z);

int main(void)
{
    printf("%.2lf\n", median(12.0, 2.0, 4.0));

    return 0;
}

double median(double x, double y, double z)
{
    double median_value = x;

    if (median_value <= y)
    {
        if (y <= z)
        {
            median_value = y;
        }
        else if (median_value <= z)
        {
            median_value = z;
        }
    }
    else if (z <= y)
    {
        median_value = y;
    }
    else if (median_value >= z)
    {
        median_value = z;
    }    

    return median_value;
}

