/*
 * Name: exercise_18.c
 * Purpose: Removes file name and slash from given URL.
 * Author: L. Adam
 */

#include <stdio.h>

void remove_filename(char *url);

int main(void)
{
    char url[] = "http://www.knking.com/index.html";
    remove_filename(url);

    printf("%s\n", url);

    return 0;
}

void remove_filename(char *url)
{
    char *p = url;

    // Moves url to the end of the string.
    while (*url++)
        ;

    // Moves url from the end of the string to the first slash.
    while (*--url != '/')
        ;

    // Makes sure that url actually contained a slash.
    if (url - p >= 0)
    {
        *url = '\0';
    }
}

