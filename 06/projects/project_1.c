/*
 * Name: project_1.c
 * Purpose: Asks users for numbers and displays largest number.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    float largest = 0.00f;
    for(float num;;)
    {
        printf("Enter a number: ");
        scanf("%f", &num);

        if (num <= 0)
        {
            break;
        }
        else if (num > largest)
        {
            largest = num;
        }
    }

    if (largest == 0.00f)
    {
       printf("No nonnegative number given.\n");
    }
    else
    {
       printf("The largest number entered was %.2f\n", largest);
    }

    return 0;
}

