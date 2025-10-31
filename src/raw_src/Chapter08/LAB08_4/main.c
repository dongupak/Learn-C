#include <stdio.h>

int find_max(int* a, int size) {
    int max = *a;   // max 값의 초기화
    for (int i = 1; i < size; i++)
        if (*(a + i) > max)
            max = *(a + i);

    return max;
}

int main() {
    int arr[] = { 1, 3, 9, 2, 4, 5 };
    int max = find_max(arr, 6);
    printf("배열의 최대값: %d\n", max); // 출력: 배열의 최대값: 5
}