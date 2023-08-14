/*
 * Name: exercise_4.c
 * Purpose: Declaration of array exercise.
 * Author: L. Adam
 */

#define DAYS ((int) (sizeof(weekend)/sizeof(weekend[0])))

#include <stdbool.h>
#include <stdio.h>

int main(void)
{
    bool weekend[] = {true, [6] = true};

    for (int i = 0; i < DAYS; i++)
    {
        printf("%d\n", weekend[i]);
    }

    return 0;
}

