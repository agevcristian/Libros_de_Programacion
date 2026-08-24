#include <stdio.h>

int main(void) 
{
    float income, taxes;

    printf("Enter the amount of taxable income: ");
    scanf("%f",&income);

    if (income > 7000.00f)
        taxes = 230.00f + .06f * (income - 7000.00f);
    else if (income > 5250.00f)
        taxes = 142.50f + .05f * (income - 5250.00f);
    else if (income > 3750.00f)
        taxes = 82.50f + .04f * (income - 3750.00f);
    else if (income > 2250.00f)
        taxes = 37.50f + .03f * (income - 2250.00f);
    else if (income > 750.00f)
        taxes = 7.50f + .02f * (income - 750.00f);
    else 
        taxes = .01f * income;

    printf("The corresponding tax is: $%.2f.\n",taxes);

    return 0;

}
