#include <stdio.h>

int main(void) 
{
    int num1, num2, num3, num4, max1, min1, max2, min2, def_max, def_min;

    printf("Enter four integers: ");
    scanf("%d%d%d%d",&num1,&num2,&num3,&num4);

    if (num1 >= num2) {
        max1 = num1;
        min1 = num2;
    }else {
        max1 = num2;
        min1 = num1;
    }

    if (num3 >= num4) {
        max2 = num3;
        min2 = num4;
    }else {
        max2 = num4;
        min2 = num3;
    }

    def_max = max1 >= max2 ? max1 : max2;
    def_min = min1 <= min2 ? min1 : min2;

    printf("Largest: %d.\nSmallest: %d.\n", def_max, def_min);

    return 0;

}
