/*
 * Name: project_7.c
 * Purpose: Displays a number with the effect of a seven segment display.
 * Author: L. Adam
 */

#include <stdio.h>

#define MAX_DIGITS 10

const int segments[10][7] = {
    {1, 1, 1, 1, 1, 1, 0},
    {0, 1, 1, 0, 0, 0, 0},
    {1, 1, 0, 1, 1, 0, 1},
    {1, 1, 1, 1, 0, 0, 1},
    {0, 1, 1, 0, 0, 1, 1},
    {1, 0, 1, 1, 0, 1, 1},
    {1, 0, 1, 1, 1, 1, 1},
    {1, 1, 1, 0, 0, 0, 0},
    {1, 1, 1, 1, 1, 1, 1},
    {1, 1, 1, 1, 0 ,1, 1}
};
char digits[4][MAX_DIGITS*4];

void clear_digits(void);
void process_digit(int digit, int position);
void print_digits_array(void);

/******************************************************************************
 * main: Calls clear_digits, then asks user for a number. This number is then *
 *       processed by process_digit to store in                               *
 *       seven-segment format. After processing the number is printed         *
 *       in seven segment-display format with print_digits_array.             *
 ******************************************************************************/
int main(void)
{
    clear_digits();

    printf("Enter a number: ");

    int n_digit = 0;
    char ch;

    while (n_digit < MAX_DIGITS)
    {
        ch = getchar();

        if (ch == '\n')
        {
            break;
        }

        if (ch >= '0' && ch <= '9')
        {
            process_digit(ch - '0', n_digit*4);
            n_digit++;
        }
    }

    print_digits_array();

    return 0;
}

/******************************************************************************
 * clear_digits: Fills the whole digits array with blank characters.          *
 ******************************************************************************/
void clear_digits()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS*4; j++)
        {
            digits[i][j] = ' ';
        }
    }
}

/******************************************************************************
 * process_digit: Converts the given digit to its seven-segment counterpart.  *
 *                The seven-segment format:                                   *
 *                                                                            *
 *                                                          _                 *
 *                                                          0                 *
 *                                                       5| _ |2              *
 *                                                          6                 *
 *                                                       4| _ |1              *
 *                                                          3                 *
 *                                                                            * 
 *                These characters are saved in their corresponding grid      *
 *                location by using a conversion array.                       *
 *                The segment locations in the grid for each digit:           *
 *                  0  1  2  3 row                                            *
 *            col 0|   0                                                      *
 *                1|5  6  1                                                   *
 *                2|4  3  2                                                   *
 *                3|                                                          *
 ******************************************************************************/
void process_digit(int digit, int position)
{
    // Credit: https://github.com/williamgherman/c-solutions/blob/master/10/projects/07/7.c
    int segment_to_grid[7][2] = {
        {0, 1},
        {1, 2},
        {2, 2},
        {2, 1},
        {2, 0},
        {1, 0},
        {1, 1}
    };

    for (int i = 0, row, col; i < 7; i++)
    {
        if (segments[digit][i])
        {
            row = segment_to_grid[i][0];
            col = segment_to_grid[i][1] + position;

            digits[row][col] = i % 3 == 0 ? '_' : '|';
        }
    }
}

/******************************************************************************
 * print_digit: Prints a given digit in seven-segment format.                 *
 *                The seven-segment format:                                   *
 *                                                          _                 *
 *                                                          0                 *
 *                                                       5| _ |2              *
 *                                                          6                 *
 *                                                       4| _ |1              *
 *                                                          3                 *
 ******************************************************************************/
void print_digits_array()
{
    for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < MAX_DIGITS*4; j++)
        {
            putchar(digits[i][j]);
        }

        putchar('\n');
    }
}

