/*
 * Name: exercise_3.c
 * Purpose: Calculates greatest common divisor of two integers.
 * Author: L. Adam
 */

int gcd(int m, int n)
{
    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }

    return m;
}

