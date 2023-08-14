/*
 * Name: project_1.c
 * Purpose: Prints the reversal of a given message.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_LEN 30

int main(void)
{
    char message[MAX_LEN];
    printf("Enter a message (max length = %d): ", MAX_LEN);
    
    char *p = message; 
    for (char ch; p < message + MAX_LEN; p++)
    {
        ch = getchar();

        if (ch == '\n')
        {
            p--;
            break;
        }

        *p = ch;
    }

    for (; p >= message; p--)
    {
        putchar(*p);
    }

    putchar('\n'); 

    return 0;
}

