/*
 * Name: project_4.c
 * Purpose: Echoes its command-line arguments in reverse order.
 * Author: L. Adam
 */

#include <stdio.h>

int main(int argc, char *argv[])
{
    for (int i = argc - 1; i >= 1; i--)
    {
        printf("%s ", argv[i]);
    }

    printf("\n");

    return 0;
}

