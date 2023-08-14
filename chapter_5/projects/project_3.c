/*
 * Name: project_3.c
 * Purpose: Calculates commission for the sale of shares.
 * Author: L. Adam
 */

#include <stdio.h>
float calc_og_commission(float value);
float calc_rival_commission(int n_shares);

int main(void)
{
    int n_shares;
    printf("Enter amount of shares: ");
    scanf("%d", &n_shares);

    float share_price;
    printf("Enter price per share: ");
    scanf("%f", &share_price);

    float value = n_shares*share_price;
    float og_commission = calc_og_commission(value);

    float rival_commission = calc_rival_commission(n_shares);

    printf("Original commission: $%.2f\n", og_commission);
    printf("Rival commission: $%.2f\n", rival_commission);

    return 0;
}

float calc_og_commission(float value)
{
    float og_commission;
    if (value < 2500.00f)
    {
        og_commission = 30.00f + .017f*value;
    }
    else if (value < 6250.00f)
    {
        og_commission = 56.00f + .0066f*value;
    }
    else if (value < 20000.00f)
    {
        og_commission = 76.00f + .0034f*value;
    }
    else if (value < 50000.00f)
    {
        og_commission = 100.00f + .0022f*value;
    }
    else if (value < 500000.00f)
    {
        og_commission = 155.00f + .0011f*value;
    }
    else
    {
        og_commission = 255.00f + .0009f*value;
    }

    if (og_commission < 39.00f)
    {
        og_commission = 39.00f;
    }

    return og_commission;
}

float calc_rival_commission(int n_shares)
{
    float rival_commission;
    if (n_shares < 2000)
    {
        rival_commission = 33.00f + .03f*n_shares;
    }
    else
    {
        rival_commission = 33.00f + .02f*n_shares;
    }

    return rival_commission;
}

