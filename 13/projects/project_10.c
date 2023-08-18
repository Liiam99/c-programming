/*
 * Name: project_10.c
 * Purpose: Displays the given full name in {surname, first initial.} format.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

void reverse_name(char *name);

int main(void)
{
    printf("Enter a first and last name: ");

    char name[MAX_LEN];
    fgets(name, MAX_LEN, stdin);
    // Strips newline.
    name[strcspn(name, "\n")] = '\0';
    reverse_name(name);

    printf("%s\n", name);

    return 0;
}

void reverse_name(char *name)
{
    char *p = name;

    // Moves to the beginning of the first name.
    while (*p == ' ')
    {
        p++;
    }

    char initial = *p;

    // Skips the rest of the first name.
    while (*p++ != ' ')
        ;

    // Moves to the beginning of the surname.
    while (*p == ' ')
    {
        p++;
    } 

    char *last_name = p;
    while (*last_name && *last_name != ' ')
    {
        *name++ = *last_name++;
    }

    sprintf(name, ", %c.", initial); 
}

