#include <stdio.h>

int main (void) 
{
    float n, max = 0;
    
    do  {
        printf("Enter a number: ");
        scanf("%f",&n);

        if (n > max)
            max = n;
    } while (n > 0);

    printf("The largest number entered was: %.2f\n", max);

    return 0;
        
}
