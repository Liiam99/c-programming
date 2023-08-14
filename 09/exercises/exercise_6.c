/*
 * Name: exercise_6.c
 * Purpose: Returns the k^th digit in a positive integer.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int digit(int n, int k);

int main(void)
{
    printf("%d\n", digit(829, 1));

    return 0;
}

int digit(int n, int k)
{
    for (int i = 1; i < k; i++)
    {
        n /= 10;
    }

    return n % 10;
}

