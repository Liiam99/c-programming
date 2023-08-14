/*
 * Name: exercise_2.c
 * Purpose: Tests different kinds of character/string-handling functions.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    char *p = "abc";

    putchar(p);
    putchar(*p);
    puts(p);
    puts(*p);

    return 0;
}

