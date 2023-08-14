/* 
 * Name: exercise_7.c
 * Purpose: Test whether statements are legal.
 * Author: L. Adam
 */

#include <stdio.h>

int f(int a, int b);

int main(void)
{
    int i = f(83, 12);
    double x = f(83, 12);
    i = f(3.15, 9.28);
    x = f(3.15, 9.28);
    f(83, 12);

    printf("%d %lf\n", i, x);

    return 0;
}

int f(int a, int b)
{
    return a + b;
}

