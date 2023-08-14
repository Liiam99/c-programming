/*
 * Name: exercise_3.c
 * Purpose: Tests scanf function.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int i, j;
    char s[10];

    scanf("%d", &i, s, &j);

    printf("%d", i, s, j);

    return 0;
}

