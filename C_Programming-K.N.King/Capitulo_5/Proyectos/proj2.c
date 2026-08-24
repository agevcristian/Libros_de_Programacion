#include <stdio.h>

int main(void) 
{
    int hora, minutos;

    printf("Enter a 24-hour time(hh:mm): ");
    scanf("%d:%d",&hora,&minutos);

    printf("Equivalent 12-hour time: ");

    if (hora >= 0 && hora <=12)
        printf("%d:%.2d ",hora, minutos);
    else 
        printf("%d:%.2d ",hora-12, minutos);

    if(hora >= 12)
        printf("PM\n");
    else 
        printf("AM\n");

    return 0;

}
