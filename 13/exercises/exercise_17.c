/*
 * Name: exercise_17.c
 * Purpose: Tests whether file name contains an extension.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>

bool test_extension(const char *file_name, const char *extension);

int main(void)
{
    bool match = test_extension("word.exe", "exe");

    printf("%d\n", match);

    return 0;
}

bool test_extension(const char *file_name, const char *extension)
{
    // Searches for the beginning of the extension if it exists.
    while (*file_name && *file_name++ != '.')
        ;

    // Compares each letter of the file's extension to the given extension.
    while (*file_name)
    {
        if (toupper(*file_name++) != toupper(*extension++))
        {
            return false;
        }
    }

    // The file name's ext must be identical to the ext (not just contain it)
    if (*file_name != *extension)
    {
        return false;
    }

    return true;
}

