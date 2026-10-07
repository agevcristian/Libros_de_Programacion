#include <stdio.h>
#include <string.h>

#define N 99 

int main(void) {

    int n;
    int row, col, prev_row, prev_col;

    printf("This program  creates a magic square of a specified size.\nThe size must be an odd number between 1 and 99.\n ");
    printf("Enter size of magic square: ");
    scanf("%d", &n);

    int magic_square[n][n];
    memset(magic_square, 0, sizeof(magic_square));

    row = 0;
    col = n / 2;
    magic_square[row][col] = 1;
    for (int i = 2; i <= n*n; ++i) {
        prev_row = row;
        prev_col = col;
        
        if (row - 1 < 0) {
            row = n-1;
        }else 
            --row;
        
        if (col + 1 >= n) {
            col = 0;
        } else 
            ++col;

        if (magic_square[row][col] != 0) {
            col = prev_col;
            row = prev_row;  
            if (prev_row + 1 >= n) {
                row = 0; 
            } else
               ++row;
        }
        magic_square[row][col] = i;

    }
    
    int i = 0;
    int j = 0;
    while (i != n && j != n) {
        printf("  %2d", magic_square[i][j]);
        ++j;
        if (i != n && j == n) {
            ++i;
            j = 0;
            printf("\n");
        }
    }

    return 0;
        
 }
