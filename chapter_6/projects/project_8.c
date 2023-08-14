/*
 * Name: project_8.c
 * Purpose: Prints a one-month calendar with the number of days given by user.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int num_days;
    printf("Enter number of days in month: ");
    scanf("%d", &num_days);

    int starting_day;
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);

    // Prints blank spaces to fill up gaps till starting day of the first week.
    for (int i = 1; i < starting_day; i++)
    {
        printf("   ");
    }

    for (int i = 1; i <= num_days; i++)
    {
        printf("%2d ", i);

        // Prints blank line if last day of the week.
        if ((i + starting_day) % 7 == 1)
        {
            printf("\n");
        }
    }

    printf("\n");

    return 0;
}

