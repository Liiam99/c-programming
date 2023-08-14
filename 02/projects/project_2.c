/*
 * Name: project_2.c
 * Purpose: Computes the volume of a sphere with a given radius.
 * Author: L. Adam
 */

#include <math.h>
#include <stdio.h>

int main(void)
{
    float radius;

    printf("Radius: ");
    scanf("%f", &radius);

    float volume = 4.0f/3.0f*M_PI*pow(radius, 3);

    printf("Volume: %.2f\n", volume);

    return 0;
}

