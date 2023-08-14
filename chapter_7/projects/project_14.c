/*
 * Name: project_14.c
 * Purpose: USes Newton's method to compute roots of positive floats.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    double x;
    double y = 1.0, old_y = 0.0;

    printf("Enter a positive number: ");
    scanf("%lf", &x);

    do
    {
        old_y = y;
        y = (y + x/y)/2;
    }
    while (fabs(y - old_y) >= 0.00001 * y);

    printf("Square root: %lf\n", y);

    return 0;
}
    
