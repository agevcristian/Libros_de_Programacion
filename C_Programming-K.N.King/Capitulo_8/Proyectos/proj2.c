#include <stdio.h>

int main(void) {
    int digit_ocurrences[10] = {0};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        ++digit_ocurrences[digit]; 
        n /= 10;
    }
    
    printf("Digit:     ");
    for (int i = 0; i < 10; ++i) {
        printf("%3d", i);
    }
    
    printf("\nOcurrences:");
    for (int i = 0; i < 10; ++i) {
        printf("%3d", digit_ocurrences[i]);
    }
    printf("\n");

        return 0;
}
