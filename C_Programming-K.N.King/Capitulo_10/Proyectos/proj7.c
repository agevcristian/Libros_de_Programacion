#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define MAX_DIGITS 10
#define ROWS 3
#define COLUMNS (MAX_DIGITS * 4)

/* Global variables*/
char digits[ROWS][COLUMNS];
const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0}, 
                             {0, 1, 1, 0, 0, 0, 0}, 
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1}, 
                             {0, 1, 1, 0, 0, 1, 1}, 
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1}, 
                             {1, 1, 1, 0, 0, 0, 0}, 
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1},
                             };

/* Prototypes */
void clear_digits_array(void);
void proccess_digit(int digit, int position);
void print_digits_array(void);


int main(int argc, char *argv[]) { 
    
    char ch;
    clear_digits_array();
    printf("Enter a number: ");

    for (int i = 0;(ch = getchar()) != '\n' && i < MAX_DIGITS;) {
        if (ch >= '0' && ch <= '9') {
            proccess_digit(ch - '0', i);
            ++i;
        }               
    }

    print_digits_array();
    printf("\n");

    return EXIT_SUCCESS; 
}

void clear_digits_array(void) {

    for (int i = 0 ; i < ROWS ; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            digits[i][j] = ' ';
        }
    }
}

void proccess_digit(int digit, int position) {
    int actual_position = position * 4;

    for (int i = 0; i < 7; ++i) {
        if (segments[digit][i] == 1) {
            switch (i) {
                case 0:{
                           digits[0][actual_position+1] = '_'; 
                       };
                       break;
                case 1:{
                           digits[1][actual_position+2] = '|';
                       };
                       break;
                case 2:{
                           digits[2][actual_position+2] = '|';
                       };
                       break;
                case 3:{
                           digits[2][actual_position+1] = '_';
                       };
                       break;
                case 4:{
                           digits[2][actual_position] = '|'; 
                       };
                       break;
                case 5:{
                           digits[1][actual_position] = '|'; 
                       };
                       break;
                case 6:{
                           digits[1][actual_position+1] = '_'; 
                       };
                       break;
                default:
                       break;
             
             } 
        }
    }
}


void print_digits_array(void) {
    for (int i = 0; i < ROWS; ++i) {
        for (int j = 0; j < COLUMNS; ++j) {
            printf("%c", digits[i][j]);
        }
        printf("\n");
    }
}
