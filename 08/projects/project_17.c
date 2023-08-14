/*
 * Name: project_17.c
 * Purpose: Prints a n x n magic square.
 * Author: L. Adam
 */

#include <stdio.h>
#include <string.h>

int main(void)
{
    printf("This program creates a magic square of a specified size.\n");
    printf("The size must be an odd number between 1 and 99.\n");

    int size;
    printf("Enter size of magic square: ");
    scanf("%d", &size);

    int magic_square[size][size];
    memset(magic_square, 0, sizeof(magic_square));

    // Starting position is middle of row 0.
    int position[2] = {0, (size - 1)/2};
    int previous_position[2] = {position[0], position[1]};

    for (int i = 1; i <= size*size; i++)
    {
        magic_square[position[0]][position[1]] = i;

        previous_position[0] = position[0];
        previous_position[1] = position[1];
        
        position[0]--;
        position[1]++;

        // Wraps around from top to bottom.
        if (position[0] < 0)
        {
            position[0] = size - 1;
        }

        // Wraps around from right to left.
        if (position[1] == size)
        {
            position[1] = 0;
        }

        // Resets position to below the previous position if next spot is not vacant.
        if (magic_square[position[0]][position[1]] != 0)
        {
            position[0] = previous_position[0] + 1;
            position[1] = previous_position[1]; 
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("%5d", magic_square[i][j]);
        }

        printf("\n");
    }

    return 0;
}

