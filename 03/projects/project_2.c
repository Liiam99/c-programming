/*
 * Name: project_2.c
 * Purpose: Formats product information entered by the user.
 * Author: L. Adam
 */

#include <stdio.h>

int main(void)
{
    int item_number, day, month, year;
    float unit_price;

    printf("Enter item number: ");
    scanf("%d", &item_number);

    printf("Enter unit price: ");
    scanf("%f", &unit_price);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &month, &day, &year);

    printf("Item\t\tUnit\t\tPurchase\n");
    printf("\t\tPrice\t\tDate\n");
    printf("%d\t\t$%7.2f\t%-2.2d/%-2.2d/%-4d\n", item_number, unit_price, month, day, year);

    return 0;
}

