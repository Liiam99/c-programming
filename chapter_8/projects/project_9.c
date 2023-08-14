/*
 * Name: project_9.c
 * Purpose: Generates a random walk using a 2D-array.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N_ROWS 10
#define N_COLS 10
#define SIZE ((int) (sizeof(directions_tried)/sizeof(directions_tried[0])))

int main(void)
{
    char grid[N_ROWS][N_COLS] = {0};

    // Initialises the seed for the random directions.
    srand ((unsigned) time(NULL));
   
    // Sets starting position (top left). 
    int position[2] = {0};
    char ch = 'A';
    grid[position[0]][position[1]] = ch;
    ch++;

    int current_row, current_col, direction;
    bool directions_tried[4] = {false}; 

    while (ch <= 'Z')
    {
        // Saves current position in case of illegal move.
        current_row = position[0];
        current_col = position[1];

        // Gets a direction that has not been tried yet.
        for (;;)
        {
            direction = rand() % 4;
            
            if (directions_tried[direction] == false)
            {
                break;
            }
        }

        if (direction == 0 && position[0] > 0)
        {
            // Up
            position[0] -= 1;
        }
        else if (direction == 1 && position[1] < N_COLS - 1)
        {
            // Right
            position[1] += 1;
        }
        else if (direction == 2 && position[0] < N_ROWS - 1)
        {
            // Down
            position[0] += 1;
        }
        else if (direction == 3 && position[1] > 0)
        {
            // Left
            position[1] -= 1; 
        }    

        // Saves the directon tried.
        directions_tried[direction] = true;

        if (grid[position[0]][position[1]] == 0)
        {
            grid[position[0]][position[1]] = ch;
            ch++;

            for (int i = 0; i < SIZE; i++)
            {
               directions_tried[i] = false;
            } 
        }
        else
        {
            // Resets position.
            position[0] = current_row;
            position[1] = current_col;

            // Checks if there are moves possible.
            int i;
            for (i = 0; i < SIZE; i++)
            {
                // Continue with the main while loop if there's a move possible.
                if (!directions_tried[i])
                {
                    break;
                }
            }

            // Terminates early if no moves left.
            if (i == 4)
            {
                break;
            }
        }
    }

    // Prints the output of the random walk.
    for (int row = 0; row < N_ROWS; row++)
    {
        for (int col = 0; col < N_COLS; col++)
        {
            if (grid[row][col] == 0)
            {
                putchar('.');
            }
            else 
            {
                putchar(grid[row][col]); 
            }

            putchar(' ');
        }

        putchar('\n');
    } 

    return 0;
}

