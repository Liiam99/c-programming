/*
 * Name: exercise_15.c
 * Purpose: Prints all temperature readings stored in a given row. 
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int temperatures[7][24] = {[5][0] = 1};
    int i = 5;

    for (int *p = temperatures[i]; p < temperatures[i] + 24; p++)
    {
        printf(" %d", *p);
    }

    putchar('\n');

    return 0;
}

