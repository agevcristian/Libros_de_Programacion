#include <stdio.h>

int main(void)
{
    float amount;

    printf("Enter a dollars-and-cents amount:\n");
    scanf("%f",&amount);

    printf("Your amount with 5%% tax added: %.2f.\n",amount + (amount*5)/100);

    return 0;
}
