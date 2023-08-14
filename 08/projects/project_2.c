/*
 * Name: project_2.c
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
        }

        n /= 10;
    }

    printf("Digit:\t   ");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d", i);
    }

    printf("\nOccurences:");
    for (int i = 0; i < 10; i++)
    {
        printf("%2d", digit_seen[i]);
    }

    printf("\n");

   return 0;
}

