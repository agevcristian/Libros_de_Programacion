#include <stdio.h>

int main(void) 
{
    int first_d,second_d,third_d;

    printf("Enter a three-digit number: ");
    scanf("%1d%1d%1d",&first_d,&second_d,&third_d);

    printf("The reversal is: %d%d%d\n", third_d, second_d, first_d);

    return 0;

}
