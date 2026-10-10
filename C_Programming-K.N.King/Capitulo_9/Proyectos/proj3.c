#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#define N 10 
#define LEFT 0
#define UP 1 
#define DOWN 2 
#define RIGHT 3

void generate_random_walk(char walk[N][N]);
void print_array(char walk[N][N]);

int main(void) {

    char table[N][N];
    
    generate_random_walk(table); 
    print_array(table);   
    

    return 0;   
}


void generate_random_walk(char walk[N][N]) {
    int i, j, direction, checks;
    char ch = 'A';
    bool can_move, found;

    srand((unsigned) time(NULL)); 

    for (i = 0, j = 0; i != N && j != N;) {
        walk[i][j] = '.';
        ++j;
        if (i != N && j == N) {
            ++i;
            j = 0;
        }
    }
    
    walk[0][0] = ch;
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
                           if (j - 1 >= 0 && walk[i][j-1] == '.') {
                                --j;
                                found = true;
                           } else 
                               direction = UP;
                           break;

                       }
                case UP:  {
                          if (i - 1 >= 0 && walk[i-1][j] == '.') {
                              --i;
                              found = true;
                          } else 
                              direction = DOWN;
                          break;
                      }
                case DOWN: {
                           if (i + 1 < N && walk[i+1][j] == '.') {
                               ++i;
                               found = true;
                               break;
                           } else 
                               direction = RIGHT;
                           break;
                       }
                case RIGHT: {
                            if (j + 1 < N && walk[i][j+1] == '.') {
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
           walk[i][j] = ch;
     }else 
         can_move = false;
  }
}


void print_array(char walk[N][N]) {
    for (int i = 0, j = 0; i != N && j !=N;) {
        printf(" %c", walk[i][j]);
        ++j;
        if (i != N && j == N) {
            printf("\n");
            ++i;
            j = 0;
            }
    }
    printf("\n");
}

