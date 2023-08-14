/*
 * Name: exercise_11.c
 * Purpose: Finds element of array with maximum value.
 * Author: L. Adam
 */

#include <stdio.h>

int find_largest(int a[], int n);

int main(void)
{
    int a[] = {3, 5, 2, 4, 7};

    printf("%d\n", find_largest(a, 5));
    
    return 0;
}

int find_largest(int a[], int n)
{
    int max = *a;
    for (int *p = a; p < a + n; p++)
    {
        if (*p > max)
        {
            max = *p;
        }
    }

    return max;
}

