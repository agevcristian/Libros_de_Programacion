#include <stdio.h>

int main(void)
{
    int num_parte1, num_parte2, num_parte3;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d",&num_parte1,&num_parte2,&num_parte3);

    printf("You entered %d.%d.%d\n", num_parte1, num_parte2, num_parte3);

    return 0;

}
