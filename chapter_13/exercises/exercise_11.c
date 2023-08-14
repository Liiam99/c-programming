/*
 * Name: exercise_11.c
 * Purpose: strcmp but with pointers.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

int str_cmp(char *s, char *t);

int main(void)
{
    char str1[] = "Hallo";
    char str2[] = "Hall";

    printf("%d\n", strcmp(str1, str2));
    printf("%d\n", str_cmp(str1, str2));

    return 0;
}

int str_cmp(char *s, char *t)
{
    for (; *s == *t; s++, t++)
    {
        if (*s == '\0')
        {
            return 0;
        }
    }

    return *s - *t;
}

