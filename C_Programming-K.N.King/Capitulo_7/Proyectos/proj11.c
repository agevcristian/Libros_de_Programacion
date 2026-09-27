#include <stdio.h>

int main(void) {
    char c, first_initial;

    printf("Enter a first and last name: ");
    
    //Ignorando los espacios hasta encontrar la primer inicial.
    while ((first_initial = getchar()) == ' ')
        ;

    //Ignorando el resto del primer nombre hasta encontrar un espacio 
    while ((c = getchar() != ' '))
        ;

    //Ignorando todos los espacios entre el primer y segundo nombre 
    while ((c = getchar()) == ' ')
        ;

    //Leyendo y colocando el sgundo nombre primero hasta encontrar un espacio o el salto de linea.
    do {
        putchar(c);
    }while ((c = getchar()) != ' ' && c != '\n');

    printf(", %c.\n", first_initial);

    return 0;

}
