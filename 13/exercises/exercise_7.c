/*
 * Name: exercise_7.c
 * Purpose: Tests outcome of different statements.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    char str[] = "Hello, this is a test.";

    // Statements to be compared:
    // *str = 0;
    // str[0] = '\0';
    // strcpy(str, "");
    // strcat(str, "");
    
    for (char *s = str; *s; s++)
    {
        putchar(*s);
    }

    putchar('\n');

    return 0;
}

