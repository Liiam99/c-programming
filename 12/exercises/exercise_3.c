/*
 * Name: exercise_3.c
 * Purpose: Swaps the contents of an array.
 * Author: L. Adam
 */

#include <stdio.h>

#define N 10

int main(void)
{
    int a[N] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = a, *q = a + N - 1, temp;
    
    while (p < q)
    {
        temp = *p;
        *p++ = *q;
        *q-- = temp;
    }

    for (int i = 0; i < N; i++)
    {
        printf(" %d\n", a[i]);
    }

    return 0;
}

