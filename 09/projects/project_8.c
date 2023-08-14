/*
 * Name: project_8.c
 * Purpose: Simulates the game of craps.
 * Author: L. Adam
 */

#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void)
{
    int wins = 0, losses = 0;
    char ch;

    do
    {
        bool is_win = play_game();
        
        if (is_win)
        {
            printf("You win!\n");
            wins++;
        }
        else
        {
            printf("You lose!\n");
            losses++;
        } 

        printf("\nPlay again? ");
        scanf(" %c", &ch);
        printf("\n");
    }
    while (toupper(ch) == 'Y'); 

    printf("Wins: %d  Losses: %d\n", wins, losses);

    return 0;
}

int roll_dice(void)
{
    srand ((unsigned) time(NULL));
    int die_1 = rand() % 6 + 1;
    int die_2 = rand() % 6 + 1;

    return die_1 + die_2;
}

bool play_game(void)
{
    int roll = roll_dice();
    printf("You rolled: %d\n", roll);

    if (roll == 7 || roll == 11)
    {
        return true;
    }

    if (roll == 2 || roll == 3 || roll == 12)
    {
       return false;
    }
    
    int point = roll;
    printf("Your point is %d\n", point);

    for (;;)
    {
        roll = roll_dice();
        printf("You rolled: %d\n", roll);

        if (roll == point)
        {
            return true;
        }

        if (roll == 7)
        {
            return false;
        }
    }
}

