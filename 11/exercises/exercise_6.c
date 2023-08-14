/*
 * Name: exercise_6.c
 * Purpose: Finds the two largest values in given array using pointers.
 * Author: L. Adam
 */

#include <stdio.h>

#define N 5

void find_two_largest(int a[], int n, int *largest, int *second_largest);

int main(void)
{
    int a[5] = {2, 3, 6, 5, 1};
    int n = N;
    int largest, second_largest;

    find_two_largest(a, n, &largest, &second_largest);

    printf("%d %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(int a[], int n, int *largest, int *second_largest)
{
    if (a[0] > a[1])
    {
        *largest = a[0];
        *second_largest = a[1];
    }
    else
    {
        *largest = a[1];
        *second_largest = a[0];
    }

    for (int i = 0; i < n; i++)
    {
        if (a[i] > *largest)
        {
            *largest = a[i];
        }
        else if (a[i] > *second_largest)
        {
            *second_largest = a[i];
        }
    }
}
    
