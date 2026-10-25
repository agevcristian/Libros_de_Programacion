#include <ctype.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 50
/* a)--------- 
int main(int argc, char *argv[])
{
    char message[SIZE],
         ch;
    int i, 
        j;

    printf("Enter a message: ");
    for (i = 0; (ch = getchar()) != '\n' && i < SIZE;) {
        if (isalpha(ch)) {
            message[i] = tolower(ch);
            ++i;
        }
    }

    for (j = i - 1, i = 0; i < j; ++i, --j) {
        if (message[j] != message[i]) {
            printf("Not a palindrome.\n");
            exit(EXIT_SUCCESS);
        }
    }

    printf("Palindrome.\n");

    return EXIT_SUCCESS;
}

*/ 


//b)---------------- 

int main(int argc, char *argv[]) {
    char message[SIZE],
         ch,
         *p,
         *q;

    printf("Enter a message: ");
    for (p = message; (ch = getchar()) != '\n' && p < message + SIZE;) {
        if (isalpha(ch)) {
            *p = tolower(ch);
            ++p;
        }
    }

    for (q = p - 1, p = message; p < q; ++p, --q) {
        if (*p != *q) {
            printf("Not a palindrome.\n");
            exit(EXIT_SUCCESS);
        }
    }

    printf("Palindrome.\n");

    return EXIT_SUCCESS;
}
