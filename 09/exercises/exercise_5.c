/*
 * Name: exercise_5.c
 * Purpose: Returns number of digits in number.
 * Author: L. Adam
 */

#include <stdio.h>

int num_digits(int);

int main(void)
{
    printf("%d\n", num_digits(10));

    return 0;
}

int num_digits(int n)
{
    int n_digits = 0;

    while (n != 0)
    {
        n_digits++;
        n /= 10;
    }

    return n_digits;
}

