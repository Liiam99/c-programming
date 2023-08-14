/*
 * Name: project_1.c
 * Purpose: Prints a table of squares to demonstrate integer overflow.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    short i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%hd", &n);

    i = n*n;
    printf("%hd\n", i);

    return 0;
}

