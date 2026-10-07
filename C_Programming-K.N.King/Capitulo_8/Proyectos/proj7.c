#include <stdio.h>

#define N 5

int main(void) {
    int table[N][N];
    int col_sum[N] = {0};
    int row_sum;
    int i, j, num;

    for (i = 0; i < N; ++i) {
        printf("Enter row %d: ", i+1);
        for (j = 0; j < N; ++j) {
            scanf("%d", &num);
            table[i][j] = num;
        }

    }

    printf("\nRow totals: ");
    for (i = 0; i < N; ++i) {
        row_sum = 0;
        for (j = 0; j < N; ++j) {
            row_sum += table[i][j];
            col_sum[j] += table[i][j];   
        }
        printf(" %d", row_sum);
    }
    
    printf("\nColumm totals: ");
    for (i = 0; i < N; ++i) {
        printf(" %d", col_sum[i]);
    }
    printf("\n");
    
    return 0;
}
