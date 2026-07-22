#include <stdio.h>

int main(void)
{
    int x;

    printf("Enter the value for x:\n");
    scanf("%d",&x);

    printf("The result of 3x⁵+2x⁴-5x³-x²+7x-6 with x=%d, is: %d.\n", x, ((((3*x + 2)*x - 5)*x - 1)*x + 7)*x - 6);
    return 0;
}

