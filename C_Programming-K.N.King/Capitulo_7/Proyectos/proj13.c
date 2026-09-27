#include <stdio.h>

int main(void) {
    int num_letters, num_words;
    char c;

    printf("Enter a sentence: ");
    num_letters = 0;
    num_words = 0;
    while ((c = getchar()) != '\n') {
        if (c != ' ') 
            ++num_letters;
        else 
            ++num_words;
    }

    printf("Average word length: %.1f\n", (float) num_letters / (num_words + 1));

    return 0;
}
