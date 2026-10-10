#include <stdio.h>
#include <math.h>

double calc_pol(double x);

int main(void) {
    double n;

    printf("Enter a value for x: ");
    scanf("%lf", &n);

    printf("3x⁵ + 2x⁴ - 5x³ - x² + 7x - 6 = %.2lf\n", calc_pol(n));

    return 0;
}

double calc_pol(double x) {
    return 3 * pow(x,5) + 2 * pow(x, 4) - 5 * pow(x, 3) - pow(x, 2) + 7 * x - 6;
}

/* Compilar con la bandera -lm porque aparentemente gcc no vincula automaticamente la librería estándar math.h */
