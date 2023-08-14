/*
 * Name: exercise_12.c
 * Purpose: Finds the two largest elements in an array.
 * Author: L. Adam
 */

#include <stdio.h>

void find_two_largest(const int *a, int n, int *largest, int *second_largest);

int main(void)
{
    int a[] = {5, 3, 4, 10, 9, 4, 2};
    int n = 7;
    
    int largest;
    int second_largest;
    find_two_largest(a, n, &largest, &second_largest);

    printf("%d %d\n", largest, second_largest);

    return 0;
}

void find_two_largest(const int *a, int n, int *largest, int *second_largest)
{
    // Assigns initial values to the two variables.
    if (*a > *(a + 1))
    {
        *largest = *a;
        *second_largest = *(a + 1);
    }
    else
    {
        *largest = *(a + 1);
        *second_largest = *a;
    }

    // Skips first two elements as they were already compared above.
    for (const int *p = a + 2; p < a + n; p++)
    {
        if (*p > *largest)
        {
            *largest = *p;
        }
        else if (*p > *second_largest)
        {
            *second_largest = *p;
        }
    }
}

