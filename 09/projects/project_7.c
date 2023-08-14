/*
 * Name: project_7.c
 * Purpose: A faster way of calculating x^n.
 * Author: L. Adam
 */

#include <stdio.h>

int power(int x, int n);

int main(void)
{
    int x;
    printf("Enter an integer: ");
    scanf("%d", &x);

    int n;
    printf("Enter a power: ");
    scanf("%d", &n);

    printf("Result: %d\n", power(x, n));

    return 0;
}

int power(int x, int n)
{
    int i = 0;

    if (n == 0)
    {
        return 1;
    }

    if (n % 2 == 0)
    {
        i = power(x, n/2);
        return i*i;
    }

    return x*power(x, n - 1);
}

