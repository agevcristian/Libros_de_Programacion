#include <stdio.h>

int main (void) 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num < 4) {
        printf("No even squares before that number.\n");
        return 0;
    }
            
    printf("The even squares between 1 and %d: \n", num);  
    for (int i = 2; i * i <= num; i+=2) {
        printf("%d\n", i*i);
    }

    return 0;

}
