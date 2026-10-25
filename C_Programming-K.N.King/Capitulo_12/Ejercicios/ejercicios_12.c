/*
 
 EJERCICIO 1)

 int a[] = {5, 15, 34, 54, 14, 2, 52, 72};
 int *p = &a[1], *q = &a[5];

 a) El valor de  *(p+3) es 14 ya que p estaba apuntando al elemento a[1], 3 lugares más adelante es la posicion 4, y su elemento en dicha posición es 14. 
 b) El valor de  *(q-3) es 34 ya que q estaba apuntando al elemento a[5], 3 lugares hacia atrás es la posición 2, y su elemento en dicha posición es 34
 c) El valor de q - p es la distancia (medida en elementos del arreglo) entre los punteros, si q apunta a a[5] y p apunta a a[1] entonces q-p equivale a 5 - 1, dando un valor de 4.
 d) p < q depende de la posicion relativa de los elementos en el arreglo, en este caso q está más adelante que p por lo que esta expresion da true.
 e) *p < *q , al usar * estamos haciendo referencia al valor mismo que apuntan los punteros, es decir a los elementos del arreglo, en este caso *p = 15 y *q = 2, por lo que la expresion da false.


 EJERCICIO 2)
 SUPOSICION : high, low y middle son punteros del mismo tipo. 
              low, high apuntan a elementos de un arreglo. 

    middle = (low + high) / 2  es ilegal porque no se pueden sumar dos punteros. C soporta solo 3 operaciones aritmeticas sobre punteros: 
                               1-sumar un entero a un puntero, 2- restar un entero a un puntero y 3- restar un puntero a otro. 

Corrección: 
    middle = low + (high - low) / 2;



 EJERCICIO 3)
#define N 10

int a[N] = {1,2,3,4,5,6,7,8,9,10};
int *p = &a[0], *q = &a[N-1], temp;

while (p < q) {
    temp = *p;
    *p++ = *q;
    *q-- = temp;
}

El contenido del arreglo a luego de que esto se ejecute será : [10,9,8,7,6,5,4,3,2,1]



EJERCICIO 4)

make_empty(){
   top_ptr = &contents[0]; 

}

bool is_empty() {
    return top_ptr == &contents[0];  
}


bool is_full() {
    return top_ptr == &contents[STACK_SIZE]; 
}



EJERCICIO 5)

SUPOSICION : a es un arreglo de 1 dimensión, p es una variable puntero. Se acaba de realizar la asignación p = a . 

a) p == a[0] Es illegal, a[0] es el primer elemento del arreglo, p es un puntero a ese primer elemento. 
b) p == &a[0] Válido, ambos son puntero al primer elemento del arreglo. El valor de la expresión es true. 
c) *p == a[0] Válido, *p hace referencia al elemento que está apuntando p, es decir a[0]. La expresión tiene valor true. 
d) p[0] == a[0] Válido, el compilador trata a p[0] como *(p + 0) lo cual es una referencia hacia el primer elemento de a, a[0]. 


EJERCICIO 6) 

int sum_array(const int *a, int n) {
    int sum = 0;

    for (const int *p = a; p < a + n; ++p) {
        sum += *p;
    }
    
    return sum;
}



EJERCICIO 7)

bool search(const int *a, 
            int n, 
            int key) {

    for (const int *p = a; p < a + n; ++p) {
        if (*p == key) {
            return true;
        }
    }

    return false;

}



EJERCICIO 8) 

void store_zeros(int *a,
                 int n) {

    for (int *p = a; p < a + n; ++p) {
        *p = 0;
    }

}


EJERCICIO 9)

double inner_producto(const double *a,
                      const double *b,
                      int n) {

    double result = 0;

    for (const double *p = a, *q = b; p < a + n && q < b + n; ++p, ++q) {
        result += *p * *q;

    }

    return result;

}


EJERCICIO 10) 

int *find_middle(int *a,
                 int n) {

    return a + n/2;

}

EJERCICIO 11)

int find_largest(const int *a,
                       int n) {

    assert(n > 0);

    int max = *a;

    for (const int *p = a + 1; p < a + n; ++p) {
        if (*p > max) {
            max = *p;
        }
    }
    
    return max;
}



EJERCICIO 12)

void find_two_largest(const int *a,
                            int n,
                            int *largest,
                            int *second_largest) {

    assert(n > 1);
    
    *largest = *a;
    *second_largest = *(a+1);
    for (const int *p = a; p < a + n; ++p) {
        if (*p > *largest) {
            *largest = *p;
            *second_largest = *largest;
        } else if (*p > *second_largest) {
                *second_largest = *p;
        }
}

EJERCICIO 13)

#define N 10
...
double ident[N][N];
int zero_counter = 0;
double *p = ident[0];

*p++ = 1;

while (p < ident[0] + (N * N)) {
    if (zero_counter == N) {
        *p++ = 1;
        zero_counter = 0;
    } else {
        *p++ = 0;
        ++zero_counter;
    }
}


EJERCICIO 14)

bool is_there;

is_there = search(temperatures[0], 7 * 24, 32);



EJERCICIO 15)

for (int *p = temperatures[i]; p < temperatures[i] + 24; ++p) {
    printf(" %d", *p);
}


EJERCICIO 16)

for (int i = 0; i < 7; ++i) {
    printf("Max temperature of day %d is : %d\n", i, find_largest(temperatures[i], 24));
}


EJERICIO 17)
int sum_two_dimensional_array(const int a[][LEN], int n) {
    int sum = 0;

    for (const int *p = a[0]; p < a[0] + (LEN * n); ++p) {
        sum += *p;
    }

    return sum;
}

EJERCICIO 18)

int evaluate_position(char board[8][8]) {
    
    int white_pieces_score = 0;
    int black_pieces_score = 0;

    for (char *p = board[0]; p < board[0] + 64; ++p) {
        bool islower = false;
        if (isalpha(*p)) {
            int value;
            if (islower(*p)) {
                is_lower = true;
            }

            switch (toupper(*p)) {
                case 'Q':
                    value = 9;
                    break;
                case 'R':
                    value = 5;
                    break;
                case 'B':
                    value = 3;
                    break;
                case 'N':
                    value = 3;
                    break;
                case 'P':
                    value = 1;
                    break;
                default:
                    value = 0;
            }

            if (islower) {
                white_pieces_score += value;
            } else
                black_pieces_score += value;

        }
    }

    return white_pieces_score - black_pieces_score;
}


 * */


