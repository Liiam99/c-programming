/*
 * Name: exercise_5.c
 * Purpose: Declares an array with the first 40 fibonacci numbers.
 * Author: L. Adam
 */

#include <stdio.h>

#define NUM ((int) (sizeof(fib_numbers)/sizeof(fib_numbers[0])))

int main(void)
{
    int fib_numbers[40] = {0, 1};

    for (int i = 0; i < NUM - 2; i++) 
    {
        fib_numbers[i + 2] = fib_numbers[i] + fib_numbers[i + 1];
    }

    for (int i = 0; i < NUM; i++)
    {
        printf("%d ", fib_numbers[i]);
    }
    
    printf("\n");

    return 0;
}

