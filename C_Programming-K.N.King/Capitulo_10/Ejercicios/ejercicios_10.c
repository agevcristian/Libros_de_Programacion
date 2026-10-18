/*********
 
 EJERCICIO 1)
 int a; 

 void f(int b) {
    int c;
 }

 void g(void) {
    int d;
    {
        int e;   
    }
 }

 int main(void) {
    int f;
 }


 a)Funcion f : variables: a, c ; parametro: b 
 b)Funcion g : variables: a, d 
 c)el bloque donde se declara e : variables: a, d, e 
 d)La funcion main: variables: a, f 


 
EJERCICIO 2)

int b, c; 

void f(void) {
    int b, d;
}

void g(int a) {
    int c;
    {
        int a, d;
    }
}

int main(void) {
    int c, d;
}

a)La funcion f : variables : b(externa), b(dentro de f), d 
b)La funcion g : variables: b, c(externa), c(dentro de g) ; parametro: a 
c)El bloque donde a y d son declaradas: variables: b, c(externa), c(dentro de g), a, d; parametro: a
d)La funcion main: variables: b, c(externa), c(en main), d 


EJERCICIO 3)

Puedo tener tantas variables diferentes i como bloques que delimiten el scope yo haga, dentro de cada uno declarando una nueva variable i. 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 */
