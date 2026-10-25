/* Finds the largest and smallest elements in an array */

#include <assert.h>
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

#define N 10

void max_min(const int *a, int n, int *max, int *min);

int main(int argc, char *argv[])
{
    int b[N], i, big, small;

    printf("Enter %d numbers: ", N);
    for (i = 0; i < N; ++i) {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallests: %d\n", small);


    return EXIT_SUCCESS;
}

void max_min(const int *a, int n, int *max, int *min) {
    assert(n > 0);

    *max = *min = *a;
    for (const int *p = a; p < a + n; ++p) {
        if (*p > *max) {
            *max = *p;
        } else if (*p < *min) {
            *min = *p;
        }
    
    }

}
