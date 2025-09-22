#include <stdio.h>
#include <stdlib.h> 
int main() {
    int n, i;
    int *arr;  
    float sum = 0, avg;
    printf("Enter the size of the array: ");
    scanf("%d", &n);
    arr = (int *)malloc(n * sizeof(int));
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", (arr + i));
    }
    for (i = 0; i < n; i++) {
        sum += *(arr + i);
    }
    avg = sum / n;
    printf("Average = %.2f\n", avg);
    free(arr);
    return 0;
}
