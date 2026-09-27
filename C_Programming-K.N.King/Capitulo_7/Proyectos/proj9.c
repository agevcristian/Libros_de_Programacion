#include <stdio.h>
#include <ctype.h>
#include <assert.h>

int main(void) {
    int hour, minutes;
    char first, second;

    printf("Enter a 12 hour time: ");
    scanf("%d:%d", &hour, &minutes);
    
    while ((first = getchar()) == ' ')
        ;
    
    first = toupper(first);
    second = toupper(getchar());

    assert((first == 'A' || first == 'P') && (second == '\n' || second == 'M'));

    if ( hour == 12 && first == 'A')
        hour = 0;

    if (first == 'P' && hour != 12)
        hour += 12;

    printf("Equivalent 24-hour time: %.2d:%.2d\n", hour, minutes);

    return 0;
}
