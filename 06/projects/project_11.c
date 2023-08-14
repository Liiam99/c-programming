/*
 * Name: project_11.c
 * Purpose: Approximates e constant with integer input from user.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int n;
    printf("Enter the maximum integer of the infinite series: ");
    scanf("%d", &n);

    float euler = 1.0f;
    for (int i = 1, factorial = 1; i <= n; i++)
    {
        factorial *= i;
        euler += 1.0f/factorial;
    }

    printf("Euler approximation: %f\n", euler);

    return 0;
}

