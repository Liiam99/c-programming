/*
 * Name: exercise_12.c
 * Purpose: Write a more efficient loop for "prime-testing".
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int n = 4;
    int d;
    for (d = 2; d*d <= n; d++)
    {
        if (n % d == 0)
        {
            break;
        }
    }

    if (d*d <= n)
    {
        printf("%d is divisible by %d\n", n , d);
    }
    else
    {
        printf("%d is prime\n", n);
    }

    return 0;
}

