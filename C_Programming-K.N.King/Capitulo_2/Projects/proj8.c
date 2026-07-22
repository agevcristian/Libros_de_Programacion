#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance, monthly_interest;

    printf("Enter amount of loan:\n");
    scanf("%f",&loan);
    printf("Enter interest rate:\n");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment:\n");
    scanf("%f",&monthly_payment);

    monthly_interest = ((loan * interest_rate) / 100) / 12;
    balance = loan - monthly_payment + monthly_interest;
    printf("Balance remaining after first payment: %.2f\n", balance);
    monthly_interest = ((balance * interest_rate) / 100) / 12;
    balance = balance - monthly_payment + monthly_interest;
    printf("Balance remaining after second payment: %.2f\n", balance);
    monthly_interest = ((balance * interest_rate) / 100) / 12;
    balance = balance - monthly_payment + monthly_interest;
    printf("Balance remaining after third payment: %.2f\n", balance);

    return 0;

}
