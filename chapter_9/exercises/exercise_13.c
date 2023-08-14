/*
 * Name: exercise_13.c
 * Purpose: Evaluates a chess position and returns the score difference.
 * Author: L. Adam
 */

int evaluate_position(char board[8][8]);

int evaluate_position(char board[8][8])
{
    // White score is first idx = 0. Black score is second idx = 1.
    int scores[2] = {0};
    int side = 0;

    char piece;

    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            piece = board[i][j];
            
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
    }

    return scores[0] - scores [1];
}
    
