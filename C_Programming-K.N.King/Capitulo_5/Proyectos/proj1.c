#include <stdio.h>

int main(void)
{
    int number;
    
    /*You may assume that the number has no more than four digits*/
    printf("Enter a number(max 4 digits): ");
    scanf("%d",&number);

    printf("The number %d has ", number);
    if (number >=0 && number <=9)
        printf("1 digit.\n");
    else if (number >=10 && number <=99)
        printf("2 digits.\n");
    else if (number >=100 && number <=999)
        printf("3 digits\n");
    else if (number >=1000 && number <=9999)
        printf("4 digits\n");


    return 0;
}
