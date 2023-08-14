/*
 * Name: project_1.c
 * Purpose: Checks for and shows repeated digits in input sequence.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int digit_seen[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    printf("Repeated digits:");

    while (n > 0)
    {
        digit = n % 10;
        if (digit_seen[digit] == 0)
        {
            digit_seen[digit] = 1;
        }
        else if (digit_seen[digit])
        {
            // Counts the number of repeats.
            digit_seen[digit] += 1;
            
            // Only prints a repeated digit once.
            if (digit_seen[digit] == 2)
            {
                printf(" %d", digit);
            }
        }

        n /= 10;
    }

    printf("\n");

   return 0;
}

