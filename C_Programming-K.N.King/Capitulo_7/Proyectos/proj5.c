#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int sum = 0;
    int letter_value;

    printf("Enter a word: ");
    
    while ((ch = getchar()) != '\n') {
        ch = toupper(ch);
        
        switch (ch) {
            case 'A': case 'E': case 'I': case 'L': case 'N': case 'O': case 'R': case 'S': case 'T': case 'U':
               letter_value = 1;
               break;
            case 'D': case 'G':
                letter_value = 2;
                break;
            case 'B': case 'C': case 'M': case 'P': 
                letter_value = 3;
                break;
            case 'F': case 'H': case 'V': case 'W': case 'Y':
                letter_value = 4;
                break;
            case 'K':
                letter_value = 5;
                break;
            case 'J': case 'X':
                letter_value = 8;
                break;
            case 'Q': case 'Z':
                letter_value = 10;
                break;
             default:
                break;  
        
        }

        sum += letter_value;
    }

    printf("Scrabble value : %d\n", sum);

    return 0;
   
}
