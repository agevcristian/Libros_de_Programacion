/* Prints a table of squares using a for statement */

#include <stdio.h>

int main (void) 
{
    long i; 
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries in table: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) 
        printf("%10ld%10ld\n", i, i * i);
    
    return 0;
    
}


//Dejando tal cual como el programa, el problema ocurre con n = 46341 en adelante. 
//Declarando i como short, el problema ocurre con n = 182 en adelante . 
//De estos experimentos concluyo que para short usa 16 bits, para int 32 bits y long 64 bits.  
