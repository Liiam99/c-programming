/*
 * Name: project_6.c
 * Purpose: Checks planet names.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#define NUM_PLANETS 9

int main(int argc, char *argv[])
{
    char *planets[] = {"Mercury", "Venus", "Earth",
                       "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto"};

    int i, j;
    char *arg, *planet;
    for (i = 1; i < argc; i++)
    {
        for (j = 0; j < NUM_PLANETS; j++)
        {
            arg = argv[i];
            planet = planets[j];

            while (toupper(*arg++) == toupper(*planet++))
            {
                if (!*arg)
                {
                    break;
                }
            }

            if (*arg == '\0' && *planet == '\0')
            {
                printf("%s is planet %d\n", planets[j], j + 1);
                break;
            }

        }

        if (j == NUM_PLANETS)
        {
            printf("%s is not a planet\n", argv[i]);
        }
    }

    return 0;
}

