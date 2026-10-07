#include <stdio.h>
#include <ctype.h>

int main(void) {
    char ch;
    int i, size;
    
    printf("How many characters will the message have? : ");
    scanf("%d", &size);
    getchar(); //limpiar \n  
    char message[size];

    printf("Enter message: "); 
    for (i= 0; (ch = getchar()) != '\n' && i < size; ++i) {
        message[i] = ch;
    }   
    
    printf("In B1FF-speak: ");
    for (i = 0; i < size; ++i) {
        ch = toupper(message[i]);

        switch (ch) {
            case 'A':
                ch = '4';
                break;
            case 'B':
                ch = '8';
                break;
            case 'E':
                ch = '3';
                break;
            case 'I':
                ch = '1';
                break;
            case 'O':
                ch = '0';
                break;
            case 'S':
                ch = '5';
                break;
            default:
               break; 
        }
        putchar(ch);
    }
    printf("!!!!!!!!!!\n");

    return 0;

}
