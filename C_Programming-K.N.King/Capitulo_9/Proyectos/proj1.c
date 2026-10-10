#include <stdio.h>

void selection_sort(int a[], int n);

int main(void) {
    int n;

    printf("How many numbers will you enter?: ");
    scanf("%d", &n);
    int arr[n];

    printf("Enter %d number/s: ", n);
    for (int i = 0 ; i < n; ++i) {
        scanf("%d", &arr[i]);
    }

    selection_sort(arr, n);

    printf("Sorted in ascending order : \n");
    for (int i = 0; i < n; ++i) {
        printf(" %d", arr[i]);
    
    }
    printf("\n");

    return 0;
}

void selection_sort(int a[], int n) {
    int temp;
    int m = 0;
    for (int i = 1; i < n; ++i) {
        if (a[m] < a[i]) {
            m = i;
        }
    }

    if (n > 1 ) {
        temp = a[n-1];
        a[n-1] = a[m];
        a[m] = temp;
        selection_sort(a, n-1);
    }
    
    
}
