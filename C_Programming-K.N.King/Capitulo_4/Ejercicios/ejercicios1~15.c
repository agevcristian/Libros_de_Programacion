#include <stdio.h>

int main(void) 

{
    int i,j;
    i=7;
    j= 3 + --i * 2;  
    printf("%d %d\n",i,j);

        return 0;
}


/*
 Ejercicio 1)

 a) i=5; j=3;
    printf("%d %d", i/j, i%j);

   output: 1 2

  b)i=2; j=3;
    printf("%d", (i+10) % j);

    output: 0

   c) i=7; j=8; k=9;
      printf("%d", (i + 10) % k/j);

     output: 1
   
   d) i=1;j=2;k=3;
      printf("%d", (i+5) % (j+2) / k);

    output: 0       


Ejercicio 2)

    No en c89 ya que si alguno de los operando de una division es negativo, su resultado puede ser redondeado hacia arriba o hacia abajo.
    Por ej. con i=9 y j=7 el resultado de  (-i)/j puede ser -1 o -2, mientras que con -(i/j) siempre es -1. En c99 ambas implementaciones
    dan el mismo resultado.


Ejercicio 9)

a) i=7; j=8;
   i*=j+1;
   printf("%d %d", i, j);

   output:> 63 8

b) i=j=k=1;
   i+=j+=k;
   printf("%d %d %d", i, j, k);

   output:> 3 2 1    

c) i=1;j=2;k=3;
   i-=j-=k;
   printf("%d %d %d", i, j, k); 
   
   output:> 2 -1 3

 d) i=2;j=1;k=0;
    i*=j*=k;
    printf("%d %d %d", i, j, k);

    output:> 0 0 0

Ejercicio 10)

a) i=6; 
   j=i+=i;
   printf("%d %d",i,j);

   output:> 12 12

b) i=5;
   j=(i-=2)+1;
   printf("%d %d",i,j);

   output:> 3 4

c) i=7;
   j=6+(i=2.5);
   printf("%d %d",i,j);

   output:> 2 8

d) i=2;j=8;
   j=(i=6)+(j=3);
   printf("%d %d",i,j);

   output:> 6 9


Ejercicio 11)

a) i=1;
   printf("%d ",i++ - 1);
   printf("%d",i);

   output:> 0 2

b) i=10;j=5;
   printf("%d ",i++ - ++j);
   printf("%d %d",i,j);

   output:> 4 11 6 

c) i=7;j=8;
   printf("%d ",i++ - --j);
   printf("%d %d",i,j);

   output:> 0 8 7

d) i=3;j=4;k=5;
   printf("%d ", i++ - j++ + --k);
   printf("%d %d %d",i,j,k);

   output:> 3 4 5 4

Ejercicio 12)

a) i=5;
   j= ++i * 3 - 2;
   printf("%d %d",i,j);

   output:> 6 16

b) i=5;
   j=3 - 2 * i++;
   printf("%d %d",i,j);
    
   output:> 6 -7 

c) i=7;
   j = 3 * i-- + 2;
   printf("%d %d",i,j);

   output:> 6 23


d) i=7;
   j= 3 + --i * 2;
   printf("%d %d",i,j);

   output:> 6 15 

Ejercicio 13)

Ambas expresiones, ++i y i++, incrementan a i en 1, la diferencia está en cuándo lo hacen:++i lo hará
inmediatamente mientras que i++ lo hará en la siguiente ejecución de comando. Como el comando i+=1 incrementará
i inmediatamente, es claro que la única expresión igual a esta es ++i.

Ejercicio 14)

a) a * b - c * d + e 
   (((a*b) - (c*d)) + e) 

b) a / b % c / d  
   (((a / b) % c) / d)

c) - a - b + c - + d 
   ((((- a) - b) + c) - (+ d)) 

d) a * - b / c - d 
   (((a * (- b)) / c) - d) 


Ejercicio 15)
i=1 ; j=2; 

a) i += j; 
i tiene el valor 3, j el valor 2. 

b) i--;
i tiene el valor 1, j el valor 2.

c) i * j / i;
i tiene el valor 1, j el valor 2.

d) i % ++j;
i tiene el valor 1, j el valor 3.



 */
