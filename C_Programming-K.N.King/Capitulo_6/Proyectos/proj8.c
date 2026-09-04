#include <stdio.h>

int main (void)
{
    int num_days, start_day;

    printf("Enter number of days in month: ");
    scanf("%d",&num_days);

    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d",&start_day);

    for (int i = start_day; i > 1; --i) 
        printf("   ");

    for (int i = 1, j = start_day; i <= num_days; ++i, ++j) {
    
        printf("%3d", i);

        if (j == 7) {
            printf("\n");
            j = 0;
        }
    }

    printf("\n");

    return 0;

}
