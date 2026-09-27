#include <stdio.h>

typedef long double Test; 

int main(void) {
    int num; 
    Test fact;

    printf("Enter a positive integer: ");

    scanf("%d", &num);
    fact = 1;
    for (int i = 1; i <= num; ++i) {
        fact *= i;
    }

    printf("Factorial of %d: %Lf\n", num, fact);

    return 0;

}


//a)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando short es n=7
//b)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando int es n=16
//c)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando long es n=20
//d)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando long long es n=20 
//e)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando float es n=34
//f)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando double es n=170
//g)-El valor más grande para el cual el programa muestra correctamente el factorial de n usando long double es n=1754

