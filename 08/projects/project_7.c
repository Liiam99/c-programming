/*
 * Name: project_7.c
 * Purpose: Prints the row sums and column sums of 5x5 array of ints.
 * Author: L. Adam
 */

#define N_ROWS 5
#define N_COLS 5

#include <stdio.h>

int main(void)
{
    int table[N_ROWS][N_COLS];
    
    for (int i = 0; i < N_ROWS; i++)
    {
        printf("Enter row %d: ", i + 1);
        
        for (int j = 0; j < N_COLS; j++)
        {
            scanf("%d", &table[i][j]);
        }
    }

    int row_totals[N_ROWS] = {0}, col_totals[N_COLS] = {0};
    
    for (int i = 0; i < N_ROWS; i++)
    {
        for (int j = 0; j < N_COLS; j++)
        {
            row_totals[i] += table[i][j];
            col_totals[i] += table[j][i];
        }
    }
    
    printf("Row totals:");

    for (int i = 0; i < N_ROWS; i++)
    {
        printf(" %d", row_totals[i]);
    }

    printf("\nCol totals:");

    for (int j = 0; j < N_COLS; j++)
    {
        printf(" %d", col_totals[j]);
    } 

    printf("\n");

    return 0;
} 

