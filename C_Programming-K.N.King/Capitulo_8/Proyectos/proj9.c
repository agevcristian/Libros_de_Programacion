#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10 
#define LEFT 0
#define UP 1 
#define DOWN 2 
#define RIGHT 3

int main(void) {

    int i, j, direction, checks;
    char table[N][N];
    char ch = 'A';
    bool can_move, found;

    srand((unsigned) time(NULL)); 

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            table[i][j] = '.';
        }
    }
    
    table[0][0] = ch;
    i = 0;
    j = 0;
    can_move = true;

    while (can_move && ch < 'Z') {
        direction = rand() % 4;
        found = false;   
        checks = 0;
            
        while (!found && checks < 4) {      
            switch (direction) {
                case LEFT: {
                           if (j - 1 >= 0 && table[i][j-1] == '.') {
                                --j;
                                found = true;
                           } else 
                               direction = UP;
                           break;

                       }
                case UP:  {
                          if (i - 1 >= 0 && table[i-1][j] == '.') {
                              --i;
                              found = true;
                          } else 
                              direction = DOWN;
                          break;
                      }
                case DOWN: {
                           if (i + 1 < N && table[i+1][j] == '.') {
                               ++i;
                               found = true;
                               break;
                           } else 
                               direction = RIGHT;
                           break;
                       }
                case RIGHT: {
                            if (j + 1 < N && table[i][j+1] == '.') {
                                ++j;
                                found = true;
                            } else 
                                direction = LEFT;
                            break;
                        }
                default:
                        break;
       }

        ++checks;
     }
     
     if (found) {
           ++ch;
           table[i][j] = ch;
     }else 
         can_move = false;
    }

    for (i = 0; i < N; ++i) {
        for (j = 0; j < N; ++j) {
            printf(" %c", table[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    return 0;

       
}
