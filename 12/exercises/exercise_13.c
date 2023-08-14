/*
 * Name: exercise_13.c
 * Purpose: Creates an identity matrix using a single pointer.
 * Author: L. Adam
 */

#include <stdio.h>

#define N 10 

int main(void)
{
    int ident[N][N];

    for (int *p = &ident[0][0], grid_location = 0; p <= &ident[N - 1][N - 1]; p++)
    {
        if (grid_location % (N + 1) == 0)
        {
            *p = 1;
        }
        else
        {
            *p = 0;
        }

        grid_location++;
    }

    return 0;
}

