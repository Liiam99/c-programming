/*
 * Name: project_3.c
 * Purpose: Classifies a poker hand.
 * Author: L. Adam
 */

#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define NUM_RANKS 13
#define NUM_SUITS 4
#define NUM_CARDS 5

bool straight, flush, four, three;
int pairs;

void read_cards(int hand[5][2]);
void analyze_hand(int hand[5][2]);
void print_result(void);

/******************************************************************************
 * main: Calls read_cards, analyze_hand, and print_result repeatedly.         *
 ******************************************************************************/
int main(void)
{
    int hand[5][2] = {0};

    for (;;)
    {
        read_cards(hand);
        analyze_hand(hand);
        print_result();
    }
}

/******************************************************************************
 * read_cards: Reads the cards into the hand array; checks for bad cards and  *
 *             duplicate cards.                                               *
 ******************************************************************************/
void read_cards(int hand[5][2])
{
    char ch, rank_ch, suit_ch;
    int rank, suit;
    bool bad_card, duplicate_card;
    int cards_read = 0;

    while (cards_read < NUM_CARDS)
    {
        bad_card = false;
        duplicate_card = false;

        printf("Enter a card: ");

        rank_ch = getchar();
        switch (rank_ch)
        {
            case '0':           exit(EXIT_SUCCESS);
            case '2':           rank = 0; break;
            case '3':           rank = 1; break;
            case '4':           rank = 2; break;
            case '5':           rank = 3; break;
            case '6':           rank = 4; break;
            case '7':           rank = 5; break;
            case '8':           rank = 6; break;
            case '9':           rank = 7; break;
            case 't': case 'T': rank = 8; break;
            case 'j': case 'J': rank = 9; break;
            case 'q': case 'Q': rank = 10; break;
            case 'k': case 'K': rank = 11; break;
            case 'a': case 'A': rank = 12; break;
            default:            bad_card = true;
        }

        suit_ch = getchar();
        switch (suit_ch)
        {
            case 'c': case 'C': suit = 0; break;
            case 'd': case 'D': suit = 1; break;
            case 'h': case 'H': suit = 2; break;
            case 's': case 'S': suit = 3; break;
        }

        while ((ch = getchar()) != '\n')
        {
            if (ch != ' ')
            {
                bad_card = true;
            }
        }

        if (bad_card)
        {
            printf("Bad card; ignored.\n");
            continue;
        }

        // Checks for duplicate card by comparing each rank and suit.
        for (int i = 0; i < cards_read; i++)
        {
            if (hand[i][0] == rank && hand[i][1] == suit)
            {
                duplicate_card = true;
            }
        }

        if (duplicate_card)
        {
            printf("Duplicate card; ignored.\n");
        }
        else
        {
            hand[cards_read][0] = rank;
            hand[cards_read][1] = suit;
            cards_read++;
        }
    }
}

/******************************************************************************
 * analyze_hand: Determines whether the hand contains a straight, a flush,    *
 *               four-of-a-kind, and/or three-of-a-kind; determines the number*
 *               of pairs; stores the results into the external variables     *
 *               straight, flush, four, three, and pairs.                     *
 ******************************************************************************/
void analyze_hand(int hand[5][2])
{
    int card, rank, suit; 
    straight = false;
    flush = false;
    four = false;
    three = false;
    pairs = 0;
    
    // Sorts the cards from lowest to highest rank.
    for (int pass = 1, rank_temp, suit_temp; pass < NUM_CARDS; pass++)
    {
        for (card = 0; card < NUM_CARDS - pass; card++)
        {
            rank = hand[card][0];
            suit = hand[card][1];

            if (hand[card + 1][0] < rank)
            {
                rank_temp = hand[card + 1][0];
                suit_temp = hand[card + 1][1];
                hand[card + 1][0] = rank;
                hand[card + 1][1] = suit; 
                hand[card][0] = rank_temp;
                hand[card][1] = suit_temp;
            }
        }
    } 

    // Checks if all the suits are the same.
    for (card = 0; card < NUM_CARDS - 1; card++)
    {
        if (hand[card][1] != hand[card + 1][1])
        {
            break;
        }
    }

    // Confirms if flush or not.
    if (card == NUM_CARDS - 1)
    {
        flush = true;
    }

    // Checks if all ranks are consecutive.
    for (card = 0; card < NUM_CARDS - 1; card++)
    {
        if (hand[card][0] + 1 != hand[card + 1][0])
        {
            break;
        }
    }

    // Confirms if straight or not
    if (card == NUM_CARDS - 1)
    {
        straight = true;
        return;
    }

    int run;
    card = 0;
    while (card < NUM_CARDS) 
    {
        rank = hand[card][0];
        run = 0;
        do 
        {
            run++;
            card++;
        } 
        while (card < NUM_CARDS && hand[card][0] == rank);
        
        switch (run) 
        {
            case 2:     
                pairs++;      
                break;
            case 3: 
                three = true; 
                break;
            case 4: 
                four = true;  
                break;
        }
    }
}

/******************************************************************************
 * print_result: Prints the classification of the hand, based on the values of*
 *               the external variables straight, flush, four, three, and     *
 *               pairs.                                                       *
 ******************************************************************************/
void print_result(void)
{
    if (straight && flush)
    {
        printf("Straight flush");
    }
    else if (four)
    {
        printf("Four of a kind");
    }
    else if (three && pairs == 1)
    {
        printf("Full house");
    }
    else if (flush)
    {
        printf("Flush");
    }
    else if (straight)
    {
        printf("Straight");
    }
    else if (three)
    {
        printf("Three of a kind");
    }
    else if (pairs == 2)
    {
        printf("Two pairs");
    }
    else if (pairs == 1)
    {
        printf("Pair");
    }
    else
    {
        printf("High card");
    }

    printf("\n\n");
}

