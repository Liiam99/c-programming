/*
 * Name: project_7.c
 * Purpose: Finds largest and smallest of four integers entered by the user.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int i1, i2, i3, i4;
    printf("Enter four integers: ");
    scanf("%d %d %d %d", &i1, &i2, &i3, &i4);

    int largest = i1, smallest = i1;
    if (i2 > largest)
    {
        largest = i2;
    }
    else
    {
        smallest = i2;
    }
    
    int largest_second = i3, smallest_second = i3;
    if (i4 > largest_second)
    {
        largest_second = i4;
    }
    else
    {
        smallest_second = i4;
    }

    if (largest_second > largest)
    {
        largest = largest_second;
    }
    
    if (smallest_second < smallest)
    {
        smallest = smallest_second;
    }

    printf("Largest: %d\n", largest);
    printf("Smallest: %d\n", smallest);

    return 0;
}

