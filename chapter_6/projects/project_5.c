/*
 * Name: project_5.c
 * Purpose: Reverses the digits of a given number.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Your number reversed: ");
    do
    {
        printf("%d", num%10);
        num /= 10;
    }
    while (num != 0);

    printf("\n");

    return 0;
}

