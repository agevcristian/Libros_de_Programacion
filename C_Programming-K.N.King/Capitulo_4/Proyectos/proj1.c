#include <stdio.h>

int main (void)
{
    int n;
    
    printf("Enter a two-digit number: ");
    scanf("%d",&n);

    printf("Te reversal is: %d%d\n",n%10,n/10);

    return 0;

}
