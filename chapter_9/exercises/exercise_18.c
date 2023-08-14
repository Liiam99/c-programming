/*
 * Name: exercise_18.c
 * Purpose: A recursive function of a greatest common divisor function.
 * Author: L. Adam
 */

#include <stdio.h>

int gcd(int m, int n);

int main(void)
{
    printf("%d\n", gcd(21, 14));
}

int gcd(int m, int n)
{
    return n == 0 ? m : gcd(n, m % n);
}

