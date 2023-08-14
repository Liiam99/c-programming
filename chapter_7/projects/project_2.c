/*
 * Name: project_2.c
 * Purpose: Prints a table of squares for given value with pauses inbetween.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int i, n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);
    
    // Gets rid of the newline in the buffer.
    getchar();

    for (i = 1; i <= n; i++)
    {
        printf("%10d%10d\n", i, i*i);

        if (i % 24 == 0 && n != 24)
        {
            printf("Press Enter to continue...");

            while (getchar() != '\n')
               ; 
        }
    }

    return 0;
}

