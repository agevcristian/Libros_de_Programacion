#include <stdio.h>

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones);

int main(void)
{
    int amount, bill_20, bill_10, bill_5, bill_1;

    printf("Enter a U.S dollar amount: ");
    scanf("%d",&amount);
    
    pay_amount(amount, &bill_20, &bill_10, &bill_5, &bill_1);

    printf("\n$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", bill_20, bill_10, bill_5, bill_1);

    return 0;
}

void pay_amount(int dollars, int *twenties, int *tens, int *fives, int *ones) {
    *twenties = dollars / 20;
    dollars -= *twenties * 20;
    *tens = dollars / 10;
    dollars -= *tens * 10;
    *fives = dollars / 5;
    dollars -= *fives * 5;
    *ones = dollars;
}
