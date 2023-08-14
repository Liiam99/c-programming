/*
 * Name: exercise_4.c
 * Purpose: Modifies the read_line function to try out different options.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

int read_line(char str[], int n);

int main(void)
{
    int n = 10;
    char str[n];
    read_line(str, n);

    return 0;
}

int read_line(char str[], int n)
{
    // ch is int because EOF is not represented in char type.
    int ch, i = 0;

    while (i < n && (ch = getchar()) != '\n')
    {
        if (i < n)
        {
            str[i++] = ch;
        }
    }
    str[i] = '\0';

    return i;
}

