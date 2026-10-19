/*
 
EJERCICIO 1)

a) *p es un alias de i. 
b) &p no es un alias de i, es un puntero a un puntero. 
c) *&p no es un alias de i. Es un equivalente a p, el cual guarda la dirección en memoria de la variable i.
d) &*p no es un alias de i, sino la direccion de i .
e) *i no es alias de i, i es una variable entera no un puntero.
f) &i no es un alias de i, sino su direccion en memoria. 
g) *&i si es un alias de i, estoy haciend referencia a la direccion donde está la variable i. 
h) &*i no es un alias de i, i no es un puntero.

EJERCICIO 2) 
||i es variable int || p y q punteros a int 

a) p = i  No es legal, error de tipo, i es variable in, p un puntero a int.
b) *p = &i NO es legal, error de tipo. Estoy asignando un puntero a int(&i) a un int(*p).
c) &p = q No es legal, 
d) p = &q No es legal, incompatibilidad de tipos de punteros. p es un puntero a int, mientras que &q es un puntero a un puntero int .
e) p = *&q Es legal ya que *&q equivale a simplemente q y p = q es una asignacion validad de int* a int* . 
f) p = q ES legal. 
g) p = *q NO es legal, incompatibilidad de tipos, *q es de tipo int, mientras que p  es int * . 
h) *p = q NO es legal, incompatibilidad de tipos, *p es de tipo int, mientras que q es  int * .
i) *p = *q Es legal, asignacion de int a int . 

EJERCICIO 3) 
void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    sum = 0.0;
    for (i = 0; i < n; ++i) {
        sum += a[i];
    }
    avg = sum / n; 
}

El problema de esta funcion es que en su cuerpo se está tratando a sum y avg como simples variables de tipo double, cuando en realidad son punteros a variables double. 
Corrección : 

void avg_sum(double a[], int n, double *avg, double *sum) {
    int i;

    *sum = 0.0;
    for (i = 0; i < n; ++i) {
        *sum += a[i];
    }
    *avg = *sum / n; 
}

EJERCICIO 4) 

void swap(int *p, int *q);

void swap(int *p, int *q) {
    int tmp = *p;
    *p = *q;
    *q = tmp;
}


EJERCICIO 5) 

void split_time(long total_sec, int *hr, int *min, int *sec) {
    *hr = total_sec / 3600;
    *min = (total_sec % 3600) / 60;
    *sec = (total_sec % 3600) % 60;
}


EJERCICIO 6) 

void find_two_largest(int a[], int n, int *largest, int *second_largest) {
    assert(n >= 2);
    *largest = a[0];
    *second_largest = a[1];

    for (int i = 0; i < n; ++i) {
        if (a[i] > *largest) {
            *second_largest = *largest;
            *largest = a[i];
        } else if (a[i] > *second_largest) {
            *second_largest = a[i];
        }
    }
}

EJERCICIO 7) 

void split_date(int day_of_year, int year, int *month, int *day) {
    assert(day_of_year > 0 && ((es_bisiesto(year) && day_of_year <= 366) || day_of_year < 366));

    int days_in_months[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    int i, days_remaining;

    if (es_bisiesto(year)) {
        days_in_months[1] = 29;
    }
    
    days_remaining = day_of_year;
    int sum_of_days = 0;
    for (i = 0; i < 12 && days_remaining > 0; ++i) {
        days_remaining -= days_in_months[i];
        if (i > 0) {
            sum_of_days += days_in_months[i-1];
        }

    }
    *month = i;
    *day = day_of_year - sum_of_days;
}


EJERCICIO 8)

int *find_largest(int a[], int n) {
    assert(n > 0);
    
    int max_i = 0;

    for (int i = 1; i < n; ++i) {
        if (a[max_i] < a[i]) {
            max_i = i;
        }
    }

    return &a[max_i];

}



*/


