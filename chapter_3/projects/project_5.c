/*
 * Name: project_5.c
 * Purpose: Asks user for numbers from 1 to 16 and prints 4x4 arrangement.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int first, second, third, fourth, fifth, sixth, seventh, eighth,
        ninth, tenth, eleventh, twelfth, thirteenth, fourteenth,
        fifteenth, sixteenth;

    printf("Enter the numbers from 1 to 16 in any order:\n");
    scanf("%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d", 
            &first, &second, &third, &fourth, &fifth, &sixth, 
            &seventh, &eighth, &ninth, &tenth, &eleventh, 
            &twelfth, &thirteenth, &fourteenth,
            &fifteenth, &sixteenth);

    int first_row_sum, second_row_sum, third_row_sum, fourth_row_sum,
        first_col_sum, second_col_sum, third_col_sum, fourth_col_sum, 
        bot_left_diag_sum, top_left_diag_sum;

    first_row_sum = first + second + third + fourth;
    second_row_sum = fifth + sixth + seventh + eighth;
    third_row_sum = ninth + tenth + eleventh + twelfth;
    fourth_row_sum = thirteenth + fourteenth + fifteenth + sixteenth;

    first_col_sum = first + fifth + ninth + thirteenth;
    second_col_sum = second + sixth + tenth + fourteenth;
    third_col_sum = third + seventh + eleventh + fifteenth;
    fourth_col_sum = fourth + eighth + twelfth + sixteenth;

    bot_left_diag_sum = thirteenth + tenth + seventh + fourth;
    top_left_diag_sum = first + sixth + eleventh + sixteenth;

    printf("%2d %2d %2d %2d\n", first, second, third, fourth);
    printf("%2d %2d %2d %2d\n", fifth, sixth, seventh, eighth);
    printf("%2d %2d %2d %2d\n", ninth, tenth, eleventh, twelfth);
    printf("%2d %2d %2d %2d\n", thirteenth, fourteenth, fifteenth, sixteenth);

    printf("Row sums: %d %d %d %d\n", 
            first_row_sum, second_row_sum, third_row_sum, fourth_row_sum);
    printf("Column sums: %d %d %d %d\n", first_col_sum, second_col_sum, third_col_sum, fourth_col_sum);
    printf("Diagonal sums: %d %d\n", bot_left_diag_sum, top_left_diag_sum);
    
    return 0;
}

