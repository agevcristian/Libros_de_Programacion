#include <stdio.h>

int main (void)
{
    int n;

    printf("This program prints a table of squares.\n");
    printf("Enter number of entries: ");
    scanf("%d",&n);


    for (int i = 1, odd = 3, square = 1; i <= n; ++i, square += odd, odd += 2) {
        printf("%10d%10d\n", i, square);

    }

    return 0;
}
