#include <stdio.h>
#include <stdlib.h>

int compare(const void* a, const void* b) {
    return (*(int*)a - *(int*)b);
}

int main() {
    int arr[] = { 42, 17, 8, 99, 23 };
    int size = sizeof(arr) / sizeof(arr[0]);

    qsort(arr, size, sizeof(int), compare);
    printf("정렬된 배열: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}