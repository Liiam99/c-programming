/*
 * Name: exercise_17.c
 * Purpose: Rewriting a recursive function into a non-recursive function.
 * Author: L. Adam
 */

#include <stdio.h>

int fact(int n);

int main(void)
{
    printf("%d\n", fact(2));

    return 0;
}

int fact(int n)
{
    int fact_value = 1;

    for (; n > 1; n--)
    {
        fact_value *= n;
    }

    return fact_value;
}

