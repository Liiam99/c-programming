/*
 * Name: project_2.c
 * Purpose: Checks if given message is a palindrome.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

#define MAX_LEN 30

int main(void)
{
    printf("Enter a message: ");

    char ch, msg[MAX_LEN];
    char *end_ptr = msg;

    while ((ch = getchar()) != '\n')
    {
        if (isalpha(ch))
        {
            *end_ptr++ = toupper(ch);
        }
    }

    // Points the ptr to the last character instead of the empty space.
    end_ptr--;

    bool palindrome = true;
    for (char *begin_ptr = msg; begin_ptr < end_ptr; begin_ptr++, end_ptr--)
    {
        if (*begin_ptr != *end_ptr)
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
    {
        printf("Palindrome\n");
    }
    else
    {
        printf("Not a palindrome.\n");
    }

    return 0;
}

