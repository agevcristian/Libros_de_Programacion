#include <stdio.h>

int main(void) 
{
    int n,aux;

    printf("Enter a three-digit number: ");
    scanf("%d",&n);
    
    aux = n/10;

    printf("The reversal is: %d%d%d\n",n%10,aux%10,n/100);

    return 0;

}
