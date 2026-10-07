#include <stdio.h>
#include <stdbool.h>

int main(void) {
    int digit;
    long n;


    for (;;) {
        printf("Enter a number(Enter a n° <= 0 to terminate): ");
        scanf("%ld", &n);
        if (n <= 0)
            break;
    
        bool digits_seen[10] = {false};
        while (n > 0) {
            digit = n % 10;
            if (digits_seen[digit])
                break;
            digits_seen[digit] = true;
            n /= 10;
        }

        if (n > 0) {
            printf("Repeated digit.\n");
        } else {
            printf("No repeated digit.\n");
        }
    }
    return 0;
}
