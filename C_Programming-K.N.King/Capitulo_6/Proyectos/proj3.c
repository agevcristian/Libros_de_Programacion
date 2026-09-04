#include <stdio.h>

int main (void)
{
    int num,denom,m,n,remainder;

    printf("Enter a fraction: ");
    scanf("%d/%d",&num,&denom);
    
    if (denom == 0) {
        printf("Denominator can't be zero.\n");
        return 0;
    }

    m = num;
    n = denom;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    printf("In lowest terms: %d/%d\n", num/m, denom/m);

    return 0;

}
