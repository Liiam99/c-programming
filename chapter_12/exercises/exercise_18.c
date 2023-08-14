/*
 * Name: exercise_18.c
 * Purpose: Evaluates a chess board.
 * Author: L. Adam
 */

#include <ctype.h>

int evaluate_position(char board[8][8]);

int evaluate_position(char board[8][8])
{
    int scores[2] = {0};
    int side = 0;

    for (char *p = *board, piece; p < *board + 8*8; p++)
    {
        piece = *p;

        // Ignore if the square has no piece.
        if (!isalpha(piece))
        {
            continue;
        }

        // Uppercase letters represent white pieces, lowercase black. 
        if (piece - 'A' >= 0 && piece - 'Z' <= 0)
        {
            side = 0;
        }
        else 
        {
            side = 1; 
        }

        switch (piece)
        {
            case 'Q': case 'q':
                scores[side] += 9;
                break;
            case 'R': case 'r':
                scores[side] += 5;
                break;
            case 'B': case 'b': case 'N': case 'n':
                scores[side] += 3;
                break;
            case 'P': case 'p':
                scores[side] += 1;
                break;
        }
        
    }

    return scores[0] - scores [1];
} 

