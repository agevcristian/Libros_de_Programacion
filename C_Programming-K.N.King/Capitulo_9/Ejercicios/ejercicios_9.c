/****
 
EJERCICIO 1)

double triangle_area(double base, height)
double product;
{   
    product = base * height;
    return product/2;
}

El segundo parámetro no tiene su tipo y la variable product está declarada fuera del cuerpo de la función.

double triangle_area(double base, double height) {
    double product;
    product = base * height;

    return product / 2;
}



EJERCICIO 2) 

int check(int x, int y, int n) {
    
    return x >= 0 && y >= 0 && x <= n - 1 && y <= n - 1;
}


EJERCICIO 3)

int gcd(int m, int n) {
    int temp;

    while(n != 0) {
        temp = n;
        n = m % n;
        m = temp;    
    }
    
    return m;
}

 
EJERCICIO 4)

int day_of_year(int month, int day, int year) {
    int days_of_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int total_days = 0;

    for (int i = 0; i < month-1; ++i) {
        total_days += days_of_months[i]; 
    }
    
    total_days += days;

    if(month > 2 && es_bisiesto(year)) {
        ++total_days;
    }
    
    return total_days;

}

EJERCICIO 5)

int num_digits(int n) {
    int count = 0;

    while (n != 0) {
        n /= 10;
        ++count;
    }

    return count;
}


EJERCICIO 6)

int digit(int n, int k) {
    assert(n >= 0 && k > 0);

    int digit, i;
      
    i = 0; 
    do {
        digit = n % 10;
        n /= 10;;
        ++i;
    } while (n != 0 && i < k); 

    if (k > i) {
        return -1;
    }

    return digit;

}


EJERCICIO 7) 

a) Legal, todos los tipos, el de los parámetros con los argumentos y el de retorno con la variable donde se guarda. 
b) Legal, los parametros y argumentos coinciden en tipo, el valor devuelto es int, y es convertido, en este caso, al tipo de la variable x(double).
c) Legal, el tipo de los argumentos no coincide con el tipo de los parámetros, asi que C realiza una conversión(double a int).
d) Legal, caso b + c 
e) Legal, el valor que devuelve la funcion simplemente no es almacenado. 


EJERCICIO 8)

a)Válido.
b)Válido. C permite que se ignore el nombre del parámetro.
c)Válido. C defaults los parámetros a int.(King dice que es inválido pero en C99, aunque haya warnings, compila.) 
d)Válido, C defaults el tipo de retorno a int.(King dice que es inválido pero en C99, con warnings, compila.) En el caso que la definicion tenga especificado un tipo de retorno diferente a int, entonces es inválido y produce error. 



EJERCICIO 9)

#include <stdio.h>

void swap(int a, int b);

int main(void) {
    int i = 1, j = 2;

    swap(i, j);
    printf("i = %d, j = %d\n", i, j);

return 0;

}

void swap (int a, int b) {
    int temp = a;
    a = b; 
    b = temp;
}


A pesar de que el programa trata de implemtar un intercambio de los valores de las variables i y j, no funciona porque la funcion copia los valores de los argumentos en sus parametros, que 
terminan siendo nuevas variables para uso exclusivo de la función.  Por lo tanto, i y j no se intercambian los valores, y muestra i = 1, j = 2.

EJERCICIO 10)

a)El mayor elemento de a. 

int largest_element(const int a[], int n) {
    assert(n > 0);

    int m = a[0];
    for (int i = 1; i < n; ++i) {
        if(a[i] > m) {
            m = a[i];
        }
    }

    return m;
}

b) El promedio de todos los elementos en a. 

double average(const int a[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += a[i];
    }
    
    return (double) sum / n;
}

c)El numero de enteros positivos en a.

int positives_counter(const int a[], int n) {
    int counter = 0;
    for (int i = 0; i < n; ++i) {
        if (a[i] >= 0) {
            ++counter;
        }
    }
    return counter;
}




EJERCICIO 11) 

float compute_GPA(char grades[], int n) {
    int sum = 0;

    for (int i = 0; i < n; ++i) {
        int value;
        switch (toupper(a[i])) {
            case 'A':
                value = 4;
                break;
            case 'B':
                value = 3;
                break;
            case 'C':
                value = 2;
                break;
            case 'D':
                value = 1;
                break;
            default :
                value = 0;
                break;
        }
        sum += value;
    }

    return sum / n;
}


EJERCICIO 12)

double inner_product(double a[], double b[], int n) {
    double sum = 0;

    for (int i = 0; i < n; ++i) {
        sum += a[i] * b[i];
    }

    return sum;
}



EJERCICIO 13) 

int evaluate_position(char board[8][8]) {
    char temp;
    int white_points = 0;
    int black_points = 0;
     
    for (int i = 0, int j = 0; i != 8 && j != 8 ;) {
        if (isalpha(board[i][j])) {
            temp = board[i][j];
            int value = 0;

            switch (toupper(board[i][j])) {
                case 'Q': 
                    value = 9;
                    break;
                case 'R':
                    value = 5;
                    break;
                case 'B': case 'N':
                    value = 3;
                    break;
                case 'P':
                    value = 1;
                    break;
                default:
                    value = 0;
                    break;

            }
            if(islower(temp)) {
                black_points += value;
            } else {
                white_points += value;
            }
        }
        
        ++j;
        if (i != 8 && j == 8) {
            ++i;
            j = 0;
        }
    }

    return white_points - black_points;

}

EJERCICIO 14)

bool has_zero(int a[], int n) {
    int i;

    for (i = 0; i < n; i++) {
        if (a[i] == 0)
           return true;
        else
           return false; 
    }
}

La funcion tiene que devolver true si al menos un elemento de a es 0, y false si TODOS los elementos son distintos de 0. La función tal cual está ahora si o si termina después de evaluar unicamente
el primer elemento. Si fuera 0 ese elemento, cumpliria con la especificacion de lo pedido, pero si es distinto retorna false sin evaluar el resto del arreglo. 

CORRECCION : 

bool has_zero(int a[], int n) {

    for (int i = 0; i < n; ++i) {
        if (a[i] == 0) {
           return true;
        }
        
    }
    return false;
}


EJERCICIO 15) 

double median(double x, double y, double z) {
    if(x <= y) {
        if (y <= z) {
            return y;
        } else if (x <= z) {
            return z;
        } else
            return x;
    }

    if (z <= y) {
        return y;
    }
    if (x <= z) {
        return x;
    }
    return z;
}


CORRECCION: 

double median(double x, double y, double z) {
  double median;

  if (x <= y) {
    if (y <= z){ 
        result = y;
    } else if (x <= z) { 
        result = z;
    } else 
        result = x;
  } else {
    if (z <= y) { 
        result = y;
    } else if (x <= z) {
        result = x;
    } else result = z;
  }

  return result;
}


EJERCICIO 16) 

int fact (int n) {
    return n <= 1 ? 1 : n * fact(n - 1);
}


EJERCICIO 17) 

int fact (int n) {
    int result = 1;
    for (int i = 1; i <= n; ++i) {
        result *= i;
    }

    return result;
}

EJERCICIO 18)

int gcd(int m, int n) {

    return n == 0? m : gcd(n, m % n);
}


EJERCICIO 19)


void pb (int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}

Esta funcion muestra el numero entero positivo n convertido al sistema binario. 
 *///
#include <stdio.h>

void pb (int n);

int main(void) {

  int n;

printf("Enter a number: ");
scanf("%d", &n);

printf("In binary: ");
pb(n);
printf("\n");

   return 0;

}



void pb (int n) {
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }
}



