/*
 * Name: project_6.c
 * Purpose: Prints sizes of different data types.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    printf("Sizes of different data types in number of bytes.\n");

    printf("Signed int: %ld\n", sizeof(int));
    printf("Signed short: %ld\n", sizeof(short));
    printf("Signed long: %ld\n", sizeof(long));

    printf("Float: %ld\n", sizeof(float));
    printf("Double: %ld\n", sizeof(double));
    printf("Long double: %ld\n", sizeof(long double));

    return 0;
}

