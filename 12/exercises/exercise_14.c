/*
 * Name: exercise_14.c
 * Purpose: Searches an entire array with temperatures for specific value.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>

bool search(const int *a, int n, int key);

int main(void)
{
    const int temperatures[7][24] = {0};

    bool is_temperature = search(temperatures[0], 7*24, 32);

    return 0;
}

bool search(const int *a, int n, int key)
{
    for (const int *p = a; p < a + n; p++)
    {
       if (*p == key)
       {
          return true;
       }
    }

    return false;
} 

