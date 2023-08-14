/*
 * Name: exercise_8.c
 * Purpose: Finds the largest element in an array and returns pointer to it.
 * Author: L. Adam
 */

#include <stdio.h>

int *find_largest(int a[], int n);

int main(void)
{
    int a[5] = {2, 3, 6, 10, 1};
    int n = 5;

    int *largest = find_largest(a, n);

    printf("%d\n", *largest);

    return 0;
}

int *find_largest(int a[], int n)
{
    int *largest = &a[0];
    for (int i = 1; i < n; i++)
    {
        if (*largest < a[i])
        {
            largest = &a[i];
        }
    }

    return largest;
}

