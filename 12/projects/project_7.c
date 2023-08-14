/*
 * Name: project_7.c
 * Purpose: Finds the largest and smallest elements in an array.
 * Author: L. Adam
 */

#include <stdio.h>

#define N 10

void max_min(int a[], int n, int *max, int *min);

int main(void)
{
    int b[N];

    printf("Enter %d numbers: ", N);
    for (int i = 0; i < N; i++)
    {
        scanf("%d", &b[i]);
    }

    int big, small;
    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int a[], int n, int *max, int *min)
{
    *max = *min = a[0];
    for (int *p = a + 1; p < a + n; p++)
    {
        if (*p > *max)
        {
            *max = *p;
        }
        else if (*p < *min)
        {
            *min = *p;
        }
    }
}

