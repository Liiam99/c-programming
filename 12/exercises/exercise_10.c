/*
 * Name: exercise_10.c
 * Purpose: Finds middle element of array.
 * Author: L. Adam
 */

#include <stdio.h>

int *find_middle(int a[], int n);

int main(void)
{
    int a[] = {3, 5, 2, 4, 7};

    printf("%d\n", *find_middle(a, 5));
    
    return 0;
}

int *find_middle(int a[], int n)
{
    return a + (n/2);
}

