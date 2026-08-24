

/*
 
Ejercicio 1)

a) i = 2; j = 3;
   k = i * j == 6;
   printf("%d", k);
  
   >Como el operador de igualdad tiene menor precedencia que cualquier operador aritmético, entonces usando parentesis : k = (i*j) == 6 , y así, k = 6 == 6. Como los operadores de igualdad producen un 0(false) o un 1(true), en este caso, a k se le asignará el valor 1.
   
    output:> 1 

b) i = 5; j = 10; k = 1;
   printf("%d", k > i < j);
   
   >Los operadores relacionales son asociativos por izquierda, por lo tanto, usando paréntesis se tiene:
    (k>i)<j. La expresion k>i producira un 0, entonces 0 < j producirá un 1.

   output:> 1 

c) i = 3; j = 2; k = 1;
   printf("%d", i < j == j < k);

   >Como los operadores de igualdad tiene una menor precedencia que los operadores relacionales, se tiene:
   (i<j) == (j<k), las expresiones en parentesis produciran respectivamente 0 y 0, así 0 == 0 producirá un 1.

   output:> 1

d) i=3; j = 4; k = 5;
   printf("%d", i % j + i < k);

   >Los operadores relacionales tiene menor precedencia que cualquier operador aritmetico, también, los operadores
   de adición tiene menor precedencia que %. Por lo tanto, con paréntesis: ((i%j) + i) < k . El valor producido será 0.
   output:> 0


Ejercicio 2)

a) i = 10; j = 5;
   printf("%d", !i < j);
   
   >Como los operadores lógicos tratan a cualquier valor distinto de cero como true, en este caso !10 producirá un 0.
  Por lo que el valor final resultante será un 1. 
   output:> 1 

b) i=2;j=1;
   printf("%d", !!i + !j);

   >Como el operador logico ! tratará a cualquier valor distinto de cero como true, y dado que es asociativo por
   derecha y tiene una precedencia mayor que cualquier operador aritmetico, la expression quedará: (!(!i)) + (!j).
   EL valor resultante será 1.
   output:> 1 

c) i=5; j=0; k=-5;
   printf("%d", i && j || k);

   >Como && tiene mayor precedencia que ||, entonces la expression quedaria:
   (i && j) || k. Dado que los operadores lógicos tratarán a cualquier valor distinto de cero como true, entonces: 
   (1 && 0) || 1, usando las reglas de la lógica proposicional esto dará como resultado el valor 1.
   output:> 1 

d) i=1; j=2; k=3;
   printf("%d", i < j || k);

   >Como la precedencia de los operadores lógicos es menor que la de los operadores relacionales, entonces: 
   (i<j) || k . Dado que la expresion i < j dará como resultado el valor 1, C no evaluara k ya que  C deducira que
   el valor de toda la expresion será 1 sin importar qué valor tenga k.
   output:> 1 

Ejercicio 3)

a) i=3;j=4;k=5;
   printf("%d", i < j || ++j < k);
   printf("%d %d %d", i, j, k);

   >Como la precedencia de los operadores logicos es menor que la de los operadores relacionales, entonces :
   (i<j) || (++j < k) . Como los operadores && y || realizan una evaluacion de corto-circuito, es decir, evalua
   primero su operando izq. , luego el derecho; en este caso i<j dara como resultado el valor 1, por este resultado
   solo y dado el operador || C deduce que la expresion completa tendra como valor 1, sin necesidad de evaluar el 
   operador derecho. Por lo tanto el primer printf mostrará el valor 1. Ya que el operador derecho no s evaluo, j no
   fue incrementado, mostrando el segundo print 3 4 5.

   output:> 1 3 4 5  

b) i=7; j=8; k=9;
   printf("%d", i - 7 && j++ < k);
   printf("%d %d %d", i,j,k); 

   >El operador logico && tiene menor precedencia que cualquier operador aritmetico, así : (i-7) && j++ < k .
    Dada la naturaleza de evaluacion corto-circuito del operador &&, evaluara primero i-7, dando como resultado 0.
    Con este solo valor, dado el operador && y sin necesidad de evaluar el operando derecho, C deduce que el 
    resultado de toda la expresion es 0, lo cual será mostrado por el primer printf. Como C no evaluo el operando
    derecho, j no fue incrementado, mostrando el último printf: 7 8 9 

   output:> 0 7 8 9

c) i=7;j=8;k=9;
   printf("%d", (i=j) || (j=k));
   printf("%d %d %d", i,j,k);

   >Como el valor de una asignacion es el valor de la variable izquierda luego de dicha asignacion, en este caso, i=j
   tiene como valor 8. Ya que los operadores logicos interpretan todo valor distinto de cero como 1(true) y dada la
   naturaleza de evaluacion de corto-circuito de el operador ||, C deduce sin evaluar el operando derecho que el valor
   de toda la expresion es 1, y esto es lo que mostrará el primer printf. Ya que no se evaluo el operando derecho,
   la asignacion j=k no se realizó, mostrando el segundo printf: 8 8 9

   output:> 1 8 8 9

d) i=1;j=1;k=1;
   printf("%d", ++i || ++j && ++k);
   printf("%d %d %d",i,j,k);

   >Como && tiene una mayor precedencia que ||, quedando asi: 
   ++i || (++j && ++k). Dada la naturaleza de evaluación de los operandos && y ||, se evaluará siempre primero 
   el operando izquierdo. Se evalua primero ++i, lo cual incrementa i en 1 y ya que los operandos logicos tratan
   cualquier valor distinto de cero como 1(true), C deduce que toda la expresion da como resultado 1, (++j && ++k)
    no es evaluado y por lo tanto ni j ni k son incrementados. Así el resultado de toda la expresion, y por
   ende lo que mostrara el primer printf es 1. EL segundo printf mostrara: 2 1 1 

   output:> 1 2 1 1 

Ejercicio 4)
Si (i < j) -> -1 
Si (i == j) -> 0
Si (i > j) -> 1 

-> La expresión indicada sería: (i > j) - (i < j) 
Si i < j , la expresion resultaria: 0 - 1 = -1
Si i > j, la expresion resultaria: 1 - 0 = 1 
Si i == j, la expresion resultaria: 0 - 0 = 0

Ejercicio 5) 
La sentencia: 
if (n >= 1 <= 10)
    printf("n is between 1 and 10\n");

Es válida en C, dado que los operadores relacionales son asociativos por izquierda, la expresión es equivalente a 
(n >= 1) <= 10 . 
Así, si n = 0, la expresión n >= 1 resultaría en un 0 que luego es evaluado en 0 <= 10 , lo cual daría 1(true) y 
mostraría el mensaje del printf diciendo que n está entre 1 y 10, lo cual es incorrecto.

Ejercicio 6)
La sentencia: 
if (n == 1-10)
    printf("n is between 1 and 10\n");

Es legal en C. Dado que los operadores de igualdad tienen una menor precedencia que cualquier operador aritmetico 
, la expresión es equivalente a (n == (1-10)). Así, si n = 5, evaluaría: 5 == (-9), lo cual daría como resultado 
un 0, evitando que se ingrese al cuerpo del if sin mostrar el mensaje del printf, el cual es cierto en este caso.

Ejercicio 7)
En la sentencia: 
printf("%d\n", i>=0? i : -i);
Dado que la expresion condicional se lee "Si i >= 0 entonces i, caso contrario -i" . Si i = 17, ya que 17 >= 0 es 
true, mostrará el valor 17. Si i = -17 entonces -17 >= 0 es falso, por lo que decantará en la expresión -i, es
decir -(-17), es decir, mostrará 17 también.

Ejercicio 8)

teenager = (age >= 13 && age <= 19) ? true : false;

Ejercicio 9)
Las 2 sentencias de if's son equivalentes, ya que para cualquier score dado, ambas implementaciones producen el 
mismo resultado en pantalla.

Ejercicio 10)
i = 1;
switch(i % 3) {
    case 0: printf("zero");
    case 1: printf("one");
    case 2: printf("two");
}

Como 1 % 3 = 1, hará matching con el case 1, imprimiendo en pantalla: one. Como no hay una sentencia de break
al final de cada case, a partir de case 1, el control pasa al siguiente case, y luego al que le sigue, es decir, 
ejecutara todas las sentencias de todos los case que le sigue al que hizo matching en un comienzo. Por lo tanto, 
en este caso, imprimira en pantalla : onetwo .

Ejercicio 11)

switch (area_code) {
    case 229:
        printf("Albany\n");
        break;
    case 404: case 470: case 678: case 770:
        printf("Atlanta\n");
        break;
    case 478:
        printf("Macon\n");
        break;
    case 706: case 762:
        printf("Columbus\n");
        break;
    case 912:
        printf("Savannah\n");
        break;
    default:
        printf("Area code not recognized\n");
        break;
}    





 */
