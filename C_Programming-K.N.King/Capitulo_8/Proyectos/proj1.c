#include <stdio.h>
#include <stdbool.h>

int main(void) {
    bool digits_seen[10] = {false};
    bool digits_repeated[10] = {false};
    bool there_is_repeated = false;
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if (digits_seen[digit]) {
            digits_repeated[digit] = true;
            there_is_repeated = true;
        }
        if (!digits_seen[digit])
            digits_seen[digit] = true;
        n /= 10;
    }

    if (!there_is_repeated) {
        printf("No repetead digits.\n");
    } else {
        printf("Repeated digit(s):");
        for (int i = 0; i < 10; ++i) {
            if (digits_repeated[i])
                printf(" %d", i);
        }
        printf("\n");
    }

    

    return 0;
}
