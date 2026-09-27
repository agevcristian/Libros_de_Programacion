#include <stdio.h>

int main (void) 
{
    double n, sum = 0;

    printf("This program sums a series of floating point numbers(double).\n");
    printf("Enter floating point numbers (0 to terminate): ");

    scanf("%lf", &n);
    while (n != 0) {
        sum += n;
        scanf("%lf", &n);
    }
    printf("The sum is: %f\n", sum);

    return 0;

}
