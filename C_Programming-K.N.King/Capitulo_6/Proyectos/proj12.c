#include <stdio.h>

int main (void) 
{
    float f_sum, epsilon;
    int fact,i;

    printf("Enter epsilon: ");
    scanf("%f",&epsilon);
   
    for (i = 1.00f,fact = 1.00f, f_sum = 0.00f; 1.00f/fact >= epsilon; ++i) {
        f_sum += 1.00f/fact;
        fact *= i;
    }
    
    printf("Stopped at %d!.\n", i-1);
    printf("e = %.10f\n", 1 + f_sum);
    
    return 0;
}
