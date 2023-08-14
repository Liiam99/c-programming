/*
 * Name: exercise_16.c
 * Purpose: Prints the highest temperature readings for each day of the week.
 * Author: L. Adam
 */

#include <stdio.h>

int find_largest(int a[], int n);

int main(void)
{
    int temperatures[7][24] = {[0][5] = 10, [0][2] = 3, [0][4] = 2, [1][2] = 2384};
    int max;

    for (int i = 0; i < 7; i++)
    {
        max = find_largest(temperatures[i], 24);
        printf("%d\n", max);
    } 

    return 0;
}

int find_largest(int a[], int n)
{
    int max = a[0];

    for (int *p = a + 1; p < a + n; p++)
    {
        if (*p > max)
        {
            max = *p;
        }
    }

    return max;
}

