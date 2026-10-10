#include <ctype.h>
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

int roll_dice(void);
bool play_game(void);

int main(void) {

    bool keep_playing = true, asserted_answer = false;
    int win = 0, losses = 0;
    char ch;
    
    srand((unsigned) time(NULL));

    while (keep_playing) {
        if(play_game()) {
            ++win;
        } else {
            ++losses;
        }
       while (!asserted_answer) {
            printf("Play again? ");
            ch = toupper(getchar());
            if (ch == 'Y' || ch == 'N') {
                asserted_answer = true;
            }
            while (getchar() != '\n') {
                ;
            }
       }
       if (ch == 'N') {
          keep_playing = false;  
       }
       printf("\n\n");
       asserted_answer = false;
    }

   printf("Wins : %d    Losses: %d\n", win, losses); 

   return 0;
}


int roll_dice(void) {
    int dice1, dice2;

    dice1 = (rand() % 6 ) + 1;
    dice2 = (rand() % 6) + 1;
    
    return dice1 + dice2;
}

bool play_game(void) {
    bool win;
    int throw_result;
    int point;

    throw_result = roll_dice(); 
    printf("You rolled: %d\n", throw_result);
    switch (throw_result) {
        case 7: case 11:
           win = true;
           break;
        case 2: case 3: case 12:
           win = false;
           break;
        default: {
                     point = throw_result;
                     printf("Your point is: %d\n", point);
                     do {
                         throw_result = roll_dice();
                         printf("You rolled: %d\n", throw_result);
                        } while (throw_result != point && throw_result != 7);
                     if (throw_result == point) {
                         win = true;
                     } else {
                         win = false;
                     }

                 };
                 break;
    
    }

    if (win) {
        printf("You win!");
    } else 
        printf("You lose!");
    printf("\n\n");
    
    return win;

}

