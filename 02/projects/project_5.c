/*
 * Name: project_5.c
 * Purpose: Asks user to enter a value for x as input for a polynomial.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    float x_val;

    printf("Enter a value for x: ");
    scanf("%f", &x_val);

    float y_val = ((((3*x_val + 2)*x_val - 5)*x_val - 1)*x_val + 7)*x_val - 6;

    printf("Result: %f\n", y_val);

    return 0;
}

