#include <stdio.h>
#include <ctype.h>

#define N 26 

int main(void) {
    int abc[N] = {0};
    char ch;

    printf("Enter first word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            ++abc[ch - 'a'];
        }
    }
    
    printf("Enter second word: ");
    while ((ch = getchar()) != '\n') {
        if (isalpha(ch)) {
            ch = tolower(ch);
            --abc[ch - 'a'];
        }
    }

    for (int i = 0; i < N; ++i) {
        if (abc[i]) {
            printf("The words are not anagrams.\n");
            return 0;
        }
    }

    printf("The words are anagrams.\n");
    
    return 0;
}
