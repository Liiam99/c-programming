/*
 * Name: exercise_12.c
 * Purpose: Calculates the inner product of two arrays (vectors).
 * Author: L. Adam
 */

#include <stdio.h>

double inner_product(double a[], double b[], int n);

int main(void)
{
    double a[] = {2.3, 4.3, 1.7};
    double b[] = {1.5, 2.5, 3.5};
    int n = 3;

    printf("%.3lf\n", inner_product(a, b, n));

    return 0;
}

double inner_product(double a[], double b[], int n)
{
    n -= 1;

    if (n == 0)
    {
        return a[n]*b[n];
    }
    else
    {
        return a[n]*b[n] + inner_product(a, b, n);
    }
}

