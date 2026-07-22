#include <stdio.h>

int main(void)
{
    int amount, bill_20, bill_10, bill_5, bill_1;

    printf("Enter a U.S dollar amount:\n");
    scanf("%d",&amount);

    bill_20 = amount / 20;
    amount = amount - 20 * bill_20;
    bill_10 = amount / 10;
    amount = amount - 10 * bill_10;
    bill_5 = amount / 5;
    amount = amount - 5 * bill_5;
    bill_1 = amount / 1;

    printf("$20 bills: %d\n$10 bills: %d\n $5 bills: %d\n $1 bills: %d\n", bill_20, bill_10, bill_5, bill_1);

    return 0;
}
