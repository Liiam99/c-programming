/*
 * Name: exercise_6.c
 * Purpose: Censors the word 'foo' in the given string.
 * Author: L. Adam
 */

#include <stdio.h>

void censor(char *s);

int main(void)
{
    char str[] = "food fool";

    censor(str);

    char *p = str;
    while (*p)
    {
        putchar(*p++);
    }

    return 0;
}

void censor(char *s)
{
    for (; *s; s++)
    {
        if (*s == 'f' && *(s + 1) == 'o' && *(s + 2) == 'o')
        {
            // Replaces 'foo' with 'xxx'.
            *s = *(s + 1) = *(s + 2) = 'x';
            s = s + 2;
        }
    }
}

