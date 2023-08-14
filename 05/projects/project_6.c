/*
 * Name: project_6.c
 * Purpose: Checks if given Universal Product Code is valid.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4, i5, i6, i7, i8, i9, i10, i11, check_digit;

    printf("Enter a UPC: ");
    scanf("%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d%1d", &i1, &i2, &i3, &i4, &i5, 
          &i6, &i7, &i8, &i9, &i10, &i11, &check_digit);

    int first_sum = i1 + i3 + i5 + i7 + i9 + i11;
    int second_sum = i2 + i4 + i6 + i8 + i10;
    int total = 3*first_sum + second_sum;

    int calculated_check_digit = 9 - ((total - 1)%10);
    if (calculated_check_digit == check_digit)
    {
        printf("VALID\n");
    }
    else
    {
        printf("INVALID\n");
    }

    return 0;
}

