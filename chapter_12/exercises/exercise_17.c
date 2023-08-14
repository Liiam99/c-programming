/*
 * Name: exercise_17.c
 * Purpose: Sums a two dimensional array.
 * Author: L. Adam
 */

#include <stdio.h>

#define LEN 10

int sum_two_dimensional_array(const int a[][LEN], int n);

int main(void)
{
    const int a[3][LEN] = {[0][1] = 12, [2][1] = 2};
    int n = 3; 
    int sum = sum_two_dimensional_array(a, n);

    printf("%d\n", sum);

    return 0;
}

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0;
    for (const int *p = *a; p < *a + n*LEN; p++)
    {
        sum += *p;
    }

    return sum;
}

