#include <stdio.h>
#include <math.h>

int main (void) {
    double x, y, division, average;
    int keep_going = 1;

    printf("Enter a positive number: ");

    scanf("%lf", &x);
    y = 1.0;


    while (keep_going) {    
    
    division = x / y;
    average = (y + division) / 2.0;

    keep_going = fabs(y - average) >= (.00001 * y); 
    y = average;
    
    }

    printf("Square root: %f\n", y);

    return 0;

}
