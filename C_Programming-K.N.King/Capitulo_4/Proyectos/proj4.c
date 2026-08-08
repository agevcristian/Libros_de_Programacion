#include <stdio.h>

int main(void)
{
    int num,aux,digit_5,digit_4,digit_3,digit_2,digit_1;

    printf("Enter a number between 0 and 32767: ");
    scanf("%d",&num);
    
    digit_5 = num%8;
    aux = num/8;
    digit_4 = aux%8;
    aux = aux/8;
    digit_3 = aux%8;
    aux = aux/8;
    digit_2 = aux%8;
    aux = aux/8;
    digit_1 = aux%8;

    printf("In octal, your number is: %d%d%d%d%d\n",digit_1,digit_2,digit_3,digit_4,digit_5);

    return 0;

}
