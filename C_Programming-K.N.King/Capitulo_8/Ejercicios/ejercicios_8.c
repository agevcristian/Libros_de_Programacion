/*
 
EJERCICIO 1)
Usando sizeof(a) / sizeof(t) , donde t es el tipo de los elementos del arreglo a, para calcular el numero de elementos de una array es
inferior a usar sizeof(a) / sizeof(a[0]) porque la primera depende del tipo de elemento. SI cambiaramos de tipo de datos, tendriamos que
cambiar no solo el macro sino también la declaración de a. Mientras que sizeof(a[0]) solo trendriamos que cambiar el tipo en la declaración
sin preocuparnos por el macro, el cual aun funcionaria correctamente.

EJERCICIO 2)
Para usar un digito(en forma de caracter) como índice de un arreglo debemos restarle a nuestra variable que guarda un digito en forma 
de caracter del '0' al '9', el caracter '0', e.g digit[ch - '0'] = 0; 
Esto es por que los caracters del '0' al '9' tiene como codigo los numeros enteros 48 al 57 respectivamente. 

EJERCICIO 3)

bool weekend[7] = {true, false, false, false, false, false, true};

EJERCICIO 4)

bool weekend[] = {[0] = true, [6] = true};


EJERCICIO 5) 
int fib_numbers[40];

fib_numbers[0] = 0;
fib_numbers[1] = 1;

for (int i = 2; i < 40; ++i) {
    fib_numbers[i] = fib_numbers[i-2] + fib_numbers[i-1];
}

EJERCICIO 6) 

const int segments[10][7] = {{1, 1, 1, 1, 1, 1, 0},
                             {0, 1, 1, 0, 0, 0, 0},   
                             {1, 1, 0, 1, 1, 0, 1},
                             {1, 1, 1, 1, 0, 0, 1},
                             {0, 1, 1, 0, 0, 1, 1},
                             {1, 0, 1, 1, 0, 1, 1},
                             {1, 0, 1, 1, 1, 1, 1},
                             {1, 1, 1, 0, 0, 0, 0},
                             {1, 1, 1, 1, 1, 1, 1},
                             {1, 1, 1, 1, 0, 1, 1},
                            }

EJERCICIO 7) Es aburrido. 

EJERCICIO 8) 

int temperature_reading[30][24];


EJERCICIO 9) 

total_temp_month = 0;
for (i = 0; i < 30; ++i) {
    total_temp_day = 0;
    for (j = 0; j < 24, ++j) {
        total_temp_day += temperature_reading[i][j];
    }
    average_temp_day = total_temp_day / 24;
    total_temp_month += average_temp_day;
}
average_temp_month = total_temp_month / 30


EJERCICIO 10)
char chess_board[8][8] = {{'r','n','b','q','k','b','n','r'},
                          {'p','p','p','p','p','p','p','p'},
                          {' ','.',' ','.',' ','.',' ','.'},
                          {'.',' ','.',' ','.',' ','.',' '},
                          {' ','.',' ','.',' ','.',' ','.'},
                          {'.',' ','.',' ','.',' ','.',' '},
                          {'P','P','P','P','P','P','P','P'},
                          {'R','N','B','Q','K','B','N','R'},

                        };


EJERCICIO 11) 

char checker_board[8][8];

for (int i = 0; i < 8; ++i) {
    for (int j = 0; j < 8; ++j ) {
        if ((i + j) % 2 == 0)
            checker_board[i][j] = 'B';
        else 
            checker_board[i][j] = 'R';
    }
}


*/ 

 
