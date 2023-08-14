/*
 * Name: exercise_12.c
 * Purpose: Gets file extension from a file name.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

void get_extension(const char *file_name, char *extension);

int main(void)
{
    char *str = "word.exe";
    char ext[strlen(str)]; 
    get_extension(str, ext);

    printf("%s\n", ext);

    return 0;
}

void get_extension(const char *file_name, char *extension)
{
    while (*file_name && *file_name++ != '.')
        ;

    strcpy(extension, file_name);
}

