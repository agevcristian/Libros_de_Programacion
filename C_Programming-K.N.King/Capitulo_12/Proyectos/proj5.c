#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

int main(int argc, char *argv[])
{
    char message[SIZE],
         ch,
         terminating_ch,
         *p,
         *q;

    printf("Enter a sentence: ");
    for (p = message; (ch = getchar()) != '\n' && ch != '?' && ch != '!' && ch != '.' && p < message + SIZE; ++p) {
        *p = ch;
    }

    terminating_ch = ch;

    printf("Reversal of sentence: ");
    for (q = p - 1; q >= message; --q) {
        if ((q > message && *(q - 1) == ' ') || q == message) {
            for (char *k = q; k < p  && *k != ' '; ++k) {
                putchar(*k); 
            }

             if (q != message) {
                putchar(' ');
            }


        }
    }
    printf("%c\n", terminating_ch);


    return EXIT_SUCCESS;
}
