/*
 * Name: exercise_7.c
 * Purpose: Practicing with array initialisers.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    const int segments[10][7] = {
        {1, 1, 1, 1, 1, 1},
        {0, 1, 1},
        {1, 1, 0, 1, 1, 0, 1},
        {1, 1, 1, 1, 0, 0, 1},
        {0, 1, 1, 0, 0, 1, 1},
        {1, 0, 1, 1, 0, 1, 1},
        {1, 0, 1, 1, 1, 1, 1},
        {1, 1, 1},
        {1, 1, 1, 1, 1, 1, 1},
        {1, 1, 1, 1, 0 ,1, 1}
    };

    printf("%zu\n", sizeof(segments));

    return 0;
}

