/*
 * Name: exercise_7.c
 * Purpose: Tries to find a key in an array.
 * Author: L. Adam
 */

#include <stdbool.h>

bool search(const int a[], int n, int key);

bool search(const int a[], int n, int key)
{
    const int *p;

    for (p = a; p < a + n; p++)
    {
        if (*p == key)
        {
            return true;
        }
    }

    return false;
}

