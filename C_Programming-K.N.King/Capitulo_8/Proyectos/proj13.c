#include <stdio.h>

#define N 20 

int main(void) {
   char last_name[N];
   char first_name_intial;
   char ch;
   int i; 

   printf("Enter a first and a last name: "); 
  
   while ((first_name_intial = getchar()) == ' ') {
    ;
   }
   while ((ch = getchar()) != ' ') {
    ;
   }
   while ((ch = getchar()) == ' ') {
    ;
   }
   
   i = 0;
   do {
   last_name[i] = ch;
   ++i;
   }while ((ch = getchar()) != ' ' && ch != '\n' && i < N);

   printf("You entered the name: ");
   for (int j = 0; j < i; ++j) {
        putchar(last_name[j]);
   }
   printf(", %c.\n", first_name_intial);

   return 0;
}
