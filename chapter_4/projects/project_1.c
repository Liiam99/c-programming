/*
 * Name: project_1.c
 * Purpose: Asks user for two-digit number, then displays the number in reverse.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int first_num, second_num, third_num;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d", &first_num, &second_num, &third_num);

    printf("The reversal is: %d%d%d\n", third_num, second_num, first_num);

    return 0;
}

