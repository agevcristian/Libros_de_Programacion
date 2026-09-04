#include <stdio.h>

int main (void) 
{
    int month, day, year, e_month, e_day, e_year;

    printf("Enter a date(mm/dd/yy): ");
    scanf("%d/%d/%d",&e_month,&e_day,&e_year);

    if (!e_month && !e_day && !e_year) {
        printf("No date entered.\n");
        return 0;
    }

    for (;;) {
        printf("Enter a date(mm/dd/yy): ");
        scanf("%d/%d/%d",&month,&day,&year);

        if(!month && !day & !year) {
            printf("%d/%d/%.2d is the earliest date.\n", e_month, e_day, e_year);
            return 0;
        }

        if (year < e_year) {
            e_month = month;
            e_day = day;
            e_year = year;
        } else if (year == e_year) {
            if (month < e_month) {
                e_month = month;
                e_day = day;
                e_year = year;
            } else if (month == e_month) {
                if (day < e_day) {
                    e_month = month;
                    e_day = day;
                    e_year = year;
                }
            }
        }
    }
            
}
