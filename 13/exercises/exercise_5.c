/*
 * Name: exercise_5.c
 * Purpose: Capitalises all letters in its argument.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>

void capitalise(char *s);

int main(void)
{
    char s[] = "Dit is, een test";
    capitalise(s);

    return 0;
}

void capitalise(char *s)
{
    for (; *s; s++)
    {
        if (isalpha(*s))
        {
            *s = toupper(*s);
        }
    }
}

