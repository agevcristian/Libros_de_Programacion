#include <stdio.h>

#define N 50 

int main(void) {
    char message[N];
    char terminating_char;
    char ch;
    int i;

    printf("Enter a sentence: ");
    for (i = 0; (ch = getchar()) != '.' && ch != '?' && ch != '!' && i < N ; ++i) {
        message[i] = ch;
    }
    terminating_char = ch;

    printf("Reversal of sentence: ");
    for (int j = i-1 ; j >= 0; --j) {
        if ((j > 0 && message[j-1] == ' ') || j == 0) {
            for (int k =j ; k < i && message[k] != ' '; ++k) {
                putchar(message[k]);
            }
            if (j != 0)
                putchar(' ');
        }
    }
    printf("%c\n", terminating_char);

    return 0;
}
