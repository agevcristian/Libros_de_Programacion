/**
 
EJERCICIO 1) Give the decimal value of each of the following integer constants.

a) 077 
Este es un numero en octal, ya que en C las constantes de este tipo deben comenzar con un 0 y contener digitos entre el 0 y 7.
Cada posicion representa una potencia de 8. 
7 * 8¹ + 7 * 8⁰ = 56 + 7 = 63(base 10)

b)0x77
Este es un numero en hexadecimal, ya que que en C las constantes de este tipo deben comenzar con 0x, conteniendo digitos entre 0 y 9, y letras entre a y
f. 
7 * 16¹ + 7 * 16⁰ = 112 + 7 = 119(base 10)

c)0XABC
Es un numero en hexadecimal, sus letras pueden ser mayuscula o minúsucula.
10 * 16² + 11 * 16¹ + 12 * 16⁰ = 2560 + 176 + 12 = 2748


EJERCICIO 2) Which of the following are not legal constants in C? Classify each legal constant as either integer or floating-point. 

a)010E2
Es una constante legal en C y de punto flotante. 
b)32.1E+5
Constante legal en C, de punto flotante.
c)0790
No es una constante legal en C. El 0 adelante hace asumir al compilador que se trata de un octal pero contiene un 9, cuando en en numeros
octales sus digitos solo van del 0 al 7. 
d)100_000
No es constante legal en C. El _ no es un digito ni separador válido para ir en medio de una constante.
e)3.978e-2 
Es una constante válida en C, de punto flotante. 

EJERCICIO 3) Which of the following are not legal types in C? 
a) short unsigned int 
Es un tipo legal en C.

b) short float
Invalido, tipos flotantes solo pueden ser: float, double y long double 

c) long double 
Tipo válido de tipo flotante.

d)unsigned long 
Válido, se puede dejar de lado el "int" 

EJERCICIO 4) If c is a variable of type char, which one of the following statements is illegal? 
a)i += c ; /i has type int 
Valido, las variables de tipo char son tratadas por C como enteros también.
b)c = 2 * c - 1; 
Valido.
c) putchar(c);
Válido. 
d) printf(c); 
Inválido. Printf espera una cadena de caracteres. 

EJERCICIO 5) Which one of the following is not a legal way to write the number 65?(Assume that the character set is ASCII)
a)'A'
Valido, el character A tiene l valor 65 en ASCII 
b)0b1000001
Inválido.
c)0101 
Valido, 0101 es 65 en octal: 1 * 8² + 1 * 8⁰
d)0x41 
Valido, 0x41 es 65 en hexadecimal: 4 * 16¹ + 1 * 16⁰
 
EJERCICIO 6) For each of the following items of data, specify  which one of the types char, short, int or long. is the smallest
one guaranteed to be large enough to store de item. 

a)Days in a month 
Un tipo char es suficiente. 

b)Days in a year 
Un tipo short es suficiente 

c)Minutes in a day 
Un tipo short es suficiente 

d)Second in a day 
Un tipo int es suficiente . 

MATIZ IMPORTANTE SOBRE EL ESTÁMDAR. Las respuestas anteriores son asumiendo una máquina moderna donde int es de 32 bits. 
El estándar no garantiza esto, lo que el estándar garantiza es que int es de al menos 16 bits, y que long es de 32 bits.

EJERCICIO 7) For each of the following character escapes, give the equivalent octal escape.(Assume that the character set is ASCII)
a) \b 
\10 
b) \n
\12 
c) \r
\15
d) \t
\11 

EJERCICIO 8) Repeat  exercise 7  but for hexadecimal. 
a) \b
\x08

b) \n
\x0a

c) \r
\x0d

d) \t 
\x09


EJERCICIO 9) Suppose that i and j  are variables of type int . What is the type of the expression i / j + 'a' ? 
La expresión es de tipo int. i/j dara como resultado un int(truncado hacia cero) y 'a' tiene tipo int, por lo que toda la expresión tiene tipo int. 

EJERCICIO 10) Suppose that i is a variable of type int, j is a variable of type long, and k is a variable of type unsigned int. 
What is the type of the expression : i + (int) j * k ? 

-El casting tiene precedencia por lo que j es un int al ser multiplicado con k. Como k es un unsigned, por la conversion artimetica usual, j pasa a ser
unsigned int y el resultado es unsigned int, lo mismo ocurre al sumarse con i siendo int: i es promocionado a unsigned int, dando el resultado final con 
tipo unsigned int. 

EJERCICIO 11) Suppose that i is a variable of type int. f is a variable of type float , and d is a variable of type double. What is the type of the 
expression : i * f / d ?
Primero se realiza (i * f) , por la aritmetica de conversion usual i es convertido a float y el resultado sería un float. Ahora bien, al dividirse
este resultado por d siendo double, i * f pasa a ser double también, dando por resultado un tipo double. 

EJERCICIO 12) Suppose that i is a variable of type int. f is a variable of type float, and d is a variable of type double. Explain what convertion 
takes place during the execution of the following statement : d = i + f ? 

Primero, en la suma i será convertido de int a float. Pero en la asignación, la aritmetica de conversion usual no cuenta. C convertira toda la expresion 
a lo que esté en la parte izq, en este caso a double. 
 
EJERCICIO 13) Assume that a program contains the following declarations: 
char c = '\1' 
short s = 2; 
int i = -3; 
long m = 5;
float f = 6.5f; 
double d = 7.5 ;

Give the value and the type of each expression : 
a)c * i 
\1 es un caracter de escape en octal que esta representado por el numero 1 en decimal . c es de tipo int, i es de tipo int. Por lo que 
la expresion es de tipo int con valor -3 

b)s + m
s es short, mientras que m es long. Por la aritmetica de conversion usual, s será convertido a long. EL resultado será un long de valor 7. 

c)f / c 
f es de tipo float mientas c de tipo int. Por la conversion de aritmetica usual c será convertido a float , por lo que el resultado de la division sera 
un float de valor 6.5

d)d / s 
d es de tipo double, mientras que s es de tipo short. Por la conversiond e aritmetica usual s será convertido a double, por lo que el resultado será un 
double de valor 3.75 

e)f - d 
f es de tipo float mientras que d es de tipo double, por la aritmetica de conversion usual f será convertido a double, y el resultado sera un double 
de valor -1.0 
f)(int) f 
f es de tipo float recibiendo un casting a int , por lo que tira su parte decimal, será el resultado de tipo int con valor 6 


EJERCICIO 14) Does the following statement always compute the fractional part of f correctly(assuming that f and frac_part are float variables)? 
frac_part = f - (int) f ;
if not, whats the problem? 
Si f posee un valor más grande de lo que pueda soportar int, el casteo va a fallar. 

EJERCICIO 15) Use typedef to create types named Int8, Int16, Int32. Define the types so that they represent 8-bit, 16-bit and 32-bit on your machine .

typedef signed char Int8;  //El estándar no garantiza que char sea signed o unsigned.  
typedef short Int16; 
typedef int Int32;

*/
