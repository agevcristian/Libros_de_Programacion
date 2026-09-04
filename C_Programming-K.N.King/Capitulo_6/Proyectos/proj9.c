#include <stdio.h>

int main(void)
{
    float loan, interest_rate, monthly_payment, balance, monthly_interest;
    int num_payments;

    printf("Enter amount of loan:\n");
    scanf("%f",&loan);
    printf("Enter number of payments: ");
    scanf("%d",&num_payments);
    printf("Enter interest rate:\n");
    scanf("%f",&interest_rate);
    printf("Enter monthly payment:\n");
    scanf("%f",&monthly_payment);
    
    balance = loan;
    for (int i = 1; i<=num_payments; ++i) {
        monthly_interest = ((balance * interest_rate) / 100) / 12;
        balance -= (monthly_payment + monthly_interest);
        printf("Balance remaining after payment N°%d: %.2f\n", i, balance);
    }
    
    return 0;

}
