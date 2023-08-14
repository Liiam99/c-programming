/*
 * Name: project_1.c
 * Purpose: Calculates how many digits a given number contains.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    long int num;

    printf("Enter a number: ");
    scanf("%ld", &num);

    long int original_num = num;
    int amount_of_digits = 0;

    while (num)
    {
        amount_of_digits++;
        num /= 10;
    }

    printf("The number %ld has %d digits\n", original_num, amount_of_digits);

    return 0;
}

