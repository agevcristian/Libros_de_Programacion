#include <stdio.h>

int main (void) 
{   

    int sum = 0, i;

    for (i = 0; i < 10; i++) {
        if (i % 2)
            continue;
        sum += i;
    }
    printf("%d\n", sum);

   return 0;

}


/*
 EJERCICIOS 1)

 i=1;
 while (i <= 128) {
    printf("%d", i);
    i *=2;
 }

 Este fragmento de programa mostrará todas las potencias positivas de 2 menores o iguales a 128.
 output:> 1 2 4 8 16 32 64 128 

EJERCICIO 2)

i = 9384;
do {
    printf("%d ", i);
    i /= 10;
} while (i > 0);

output :> 9384 938 93 9 
 
 
EJERCICIO 3)

for (i = 5, j = i - 1; i > 0, j > 0; --i, j = i - 1) 
    printf("%d ", i);

En la expresion i > 0, j > 0   C evalua i > 0 y descarta su valor(no hay side effect)
Y como la expresion entera con el operador de coma toma como valor solo la parte derecha, la expresión
de control depende UNICAMENTE de j>0.

output:> 5 4 3 2
 
 
EJERCICIO 4)

a) for (i = 0; i < 10; i++) ...
b) for (i = 0; i < 10; ++i) ...
c) for (i = 0; i++ < 10; ) ...

La sentencia que no es equivalente a las otras 2 es la (c) ya que incrementa a i en el preciso momento
luego de que C evalue la expresión de control del for, es decir, antes de ejecutar el cuerpo del bucle. Las
otras 2 sentencias incrementan i luego de que se ejecute el cuerpo del bucle. Si el cuerpo del bucle fuera 
igual en ambas(como se supone) y se trabajará con la variable i, los resultados serían distintos. 
 
 
EJERCICIO 5)

a) while (i < 10) {...}
b) for (; i < 10; ) {...}
c) do {...} while (i < 10);

La sentencia que no es equivalente a las otras 2 es la (c), ya que como es un bucle do, se ejecutara al menos una vez siempre.
Caso contrario es con los otros dos que pueden no ejecutarse ni siquiera 1 vez si la expresion de control es false desde un principio.


EJERCICIO 6) Transcribir el ejercicio 1 a un for. 

for (i = 1; i <= 128; i *= 2)
    printf("%d ", i);



EJERCICIO 7) Transcibir el ejercicio 2 a un for.

for (i = 9384; i > 0; i/=10)
    printf("%d ", i);


EJERCICIO 8) 

for (i = 10; i >= 1; i /= 2)
    printf("%d ", i++);



output:> 10 5 3 2 1 1 1 1 1 ... infinitos 1 
 

EJERCICIO 9) Transcribir el ejercicio 8 en una setnencia while 

i = 10;
while (1 >= 1) {
    printf("%d ", i++);
    i /= 2;
}

EJERCICIO 10) 

Mostrar como reemplazar una sentencia continue con una equivalente sentencia goto.

Como la sentencia continue dentro de un loop transfiere el control a un punto justo antes de que
termine el cuerpo del bucle, la equivalente sentencia goto tendra que ir ahí también colocando un label
al final del cuerpo del bucle con una sentencia null. 

for (expr1; expr2; expr3) {
    statement1;
    continue;
    statement2;
}


for (expr1; expr2; expr3) {
    statement1;
    goto pass;
    statement2;
    pass: ; 
}


EJERCICIO 11)

sum = 0;
for (i = 0; i < 10; i++) {
    if (i % 2)
        continue;
    sum += i;
}
printf("%d\n", sum);

Este fragmento de programa suma los números pares menores que 10.
output:> 20

EJERCICIO 12) 

for (d = 2; d * d <= n; d++)
    if (n % d == 0)
        break;


EJERCICIO 13)

Reescribir el siguiente bucle de manera que tenga un cuerpo vacío.
for (n = 0; m > 0; n++)
    m /= 2;


for (n = 0; m > 0; n++, m /= 2)
    ;


EJERCICIO 14) Encontrar el error y arregalrlo.

if (n % 2 == 0);
    printf("n is even.\n");

if (n % 2 == 0)
    printf("n is even.\n");



*/
