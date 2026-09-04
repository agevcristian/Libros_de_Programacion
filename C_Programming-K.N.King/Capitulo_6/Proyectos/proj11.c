#include <stdio.h>

int main (void) 
{
    float f_sum= 0.00f;
    int n;

    printf("Enter n (integer) which would be the factorial to aproximate the number e: ");
    scanf("%d",&n);

    for (int fact = 1.00f, i = 1.00f; i <= n; ++i) {
        f_sum += 1.00f/fact;
        fact *= i;
    }

    printf("e = %.10f\n", 1 + f_sum);
    
    return 0;
}
