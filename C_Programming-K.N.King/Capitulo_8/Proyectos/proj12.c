#include <stdio.h>
#include <ctype.h>

#define SIZE (int) (sizeof(letter_value) / sizeof(letter_value[0]))

int main(void) {
    int letters_value[] = {1,3,3,2,1,4,2,4,1,8,5,1,3,1,1,3,10,1,1,1,1,4,4,8,4,10};
    int sum;
    char ch;

    printf("Enter a word: ");
    sum = 0;
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        
        sum += letters_value[ch - 'A'];
    }

    printf("Scrabble value: %d.\n", sum);

    return 0;
}
