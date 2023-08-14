/*
 * Name: project_3.c
 * Purpose: Sums a series of double values.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    double d, sum = 0.0;

    printf("This program sums a series of double values.\n");
    printf("Enter double values (0 to terminate): "); 

    scanf("%lf", &d);
    while (d != 0.0) 
    {
        sum += d;
        scanf("%lf", &d);
    }
    printf("The sum is %lf\n", sum);

    return 0;
}

