/*
 * Name: project_4.c
 * Purpose: Calculates commission for multiple trades.
 * Author: L. Adam
 */

#include <stdio.h>

float calc_commission(float value);

int main(void)
{
    for (float value;;)
    {
        printf("Enter value of trade: ");
        scanf("%f", &value);
        
        if (value == 0.0f)
        {
            break;
        }

        printf("Commission: $%.2f\n\n", calc_commission(value));
    }

    return 0;
}

float calc_commission(float value)
{
    float commission;
    if (value < 2500.00f)
    {
        commission = 30.00f + .017f*value;
    }
    else if (value < 6250.00f)
    {
        commission = 56.00f + .0066f*value;
    }
    else if (value < 20000.00f)
    {
        commission = 76.00f + .0034f*value;
    }
    else if (value < 50000.00f)
    {
        commission = 100.00f + .0022f*value;
    }
    else if (value < 500000.00f)
    {
        commission = 155.00f + .0011f*value;
    }
    else
    {
        commission = 255.00f + .0009f*value;
    }

    if (commission < 39.00f)
    {
        commission = 39.00f;
    }

    return commission;
}

