#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define SIZE 50

/* a) ----- 

int main(int argc, char *argv[])
{   
    char message[SIZE],
         ch;
    int i;

    printf("Enter a message: ");
    for (i = 0; (ch = getchar()) != '\n' && i < SIZE ; ++i) {
        message[i] = ch;
    }
   
    if (i == SIZE) {
        i = SIZE - 1;
    }

    printf("Reversal is: ");

    for (; i >= 0; --i) {
        printf("%c", message[i]);
    }
    printf("\n");

    return EXIT_SUCCESS;
}

*/ 


//b)----- 
int main(int argc, char *argv[]) {

    char message[SIZE],
         ch,
         *p;

    printf("Enter a message: ");
    for (p = message; (ch = getchar()) != '\n' && p < message + SIZE; ++p) {
        *p = ch;
    }

    if (p == message + SIZE) {
        --p;
    }

    printf("Reversal is: ");

    for (; p >= message; --p) {
        printf("%c", *p);
    }
    printf("\n");

    return EXIT_SUCCESS;
}
