#include <stdio.h>

#define N 80

int main(void) {
    char message[N];
    char ch;
    int shift_num, i;
     
    printf("Enter a message to be encrypted : ");
    for (i = 0; (ch = getchar()) != '\n' && i < N; ++i) {
            message[i] = ch;
    
    }

    printf("Enter shift amount (1-25): ");
    scanf("%d", &shift_num);

    printf("Encrypted message: ");
    for (int j = 0; j < i; ++j) {
        ch = message[j];
        if (ch >= 'a' && ch <= 'z' && (ch + shift_num) > 'z') {
            ch = ((ch - 'a') + shift_num) % 26 + 'a';
        
        } else if (ch >= 'A' && ch <= 'Z' && (ch + shift_num) > 'Z') {
                   ch = ((ch - 'A') + shift_num) % 26 + 'A';

               } else if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z')) {
                          ch = ch + shift_num;
               } 
        putchar(ch);
     }
     printf("\n");

    return 0;   

}
