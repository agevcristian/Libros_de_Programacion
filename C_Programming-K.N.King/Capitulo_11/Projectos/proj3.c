#include <stdio.h>

void reduce(int numerator,
            int denominator,
            int *reduced_numerator,
            int *reduced_denominator);

int main (void)
{
    int num,
        denom,
        reduced_num,
        reduced_denom;

    printf("Enter a fraction: ");
    scanf("%d/%d",&num,&denom);
    
    if (denom == 0) {
        printf("Denominator can't be zero.\n");
        return 0;
    }

   reduce(num, denom, &reduced_num, &reduced_denom); 

    printf("In lowest terms: %d/%d\n", reduced_num, reduced_denom);

    return 0;

}



void reduce(int numerator,
            int denominator,
            int *reduced_numerator,
            int *reduced_denominator)
{
    int remainder,
        m,
        n;

    m = numerator;
    n = denominator;

    while (n != 0) {
        remainder = m % n;
        m = n;
        n = remainder;
    }

    *reduced_numerator = numerator / m;
    *reduced_denominator = denominator / m;
}
