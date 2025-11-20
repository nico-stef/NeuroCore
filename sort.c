#include <stdio.h>
#include <stdlib.h>

// Funcție de comparare pentru qsort
int compare_ints(const void *a, const void *b) {
    int arg1 = *(const int*)a;
    int arg2 = *(const int*)b;

    if (arg1 < arg2) return -1;
    if (arg1 > arg2) return 1;
    return 0;
}

int main() {
    int array[] = {42, 23, 17, 13, 57, 10, 5};
    int n = sizeof(array) / sizeof(array[0]);

    printf("Array înainte de sortare:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    // Sortare
    qsort(array, n, sizeof(int), compare_ints);

    printf("Array după sortare:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", array[i]);
    }
    printf("\n");

    return 0;
}
