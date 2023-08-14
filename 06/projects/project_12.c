/*
 * Name: project_12.c
 * Purpose: Approximates e constant till added terms are smaller than limit.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float term_limit;
    printf("Enter minimum term limit to add to approximate: ");
    scanf("%f", &term_limit);

    float euler = 1.0f;
    float term;

    for (int i = 1, factorial = 1; ; i++)
    {
        factorial *= i;
        term = 1.0f/factorial;

        // Only terms that are smaller than the limit are allowed to be added.
        if (term < term_limit)
        {
            break;
        }

        euler += term;
    }

    printf("Euler approximation: %f\n", euler);

    return 0;
}

