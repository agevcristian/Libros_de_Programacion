#include <stdio.h>

#define N 15

int main(void) {
    char message[N], ch;

    printf("Enter phone number: ");

    for (int i = 0; i < N && (ch = getchar()) != '\n' ; ++i) {
        if (ch >= 'A' && ch <= 'Z') {
            switch (ch) {
                case 'A': case 'B' : case 'C':
                    ch = '2';
                    break;
                case 'D': case 'E': case 'F':
                    ch = '3';
                    break;
                case 'G': case 'H': case 'I':
                    ch = '4';
                    break;
                case 'J': case 'K': case 'L':
                    ch = '5';
                    break;
                case 'M': case 'N': case 'O':
                    ch = '6';
                    break;
                case 'P': case 'R': case 'S':
                    ch = '7';
                    break;
                case 'T': case 'U': case 'V': 
                    ch = '8';
                    break;
                case 'W': case 'X': case 'Y': 
                    ch = '9';
                    break;
                default: 
                    break;     
            
            }

        }
        message[i] = ch;
    
    }

    printf("In numeric form: ");
    for (int i = 0; i < N; ++i) {
        printf("%c", message[i]);
    }
    printf("\n");

    return 0;
}
