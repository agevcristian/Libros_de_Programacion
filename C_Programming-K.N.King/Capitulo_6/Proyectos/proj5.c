#include <stdio.h>

int main (void) 
{
    int num;

    printf("Enter a number: ");
    scanf("%d",&num);

    printf("The reversal is: ");

    while(num) {
        printf("%d", num%10);
        num /= 10;
    }

    printf("\n");

    return 0;
}
