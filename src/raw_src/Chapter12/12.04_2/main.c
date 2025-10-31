#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a, n = 5;

    a = (int*)calloc(n, sizeof(int));
    // realloc으로 배열을 8개 크기로 확장
    int new_n = 8;
    int* temp = realloc(a, new_n * sizeof(int));
    a = temp;
    // 새로 추가된 공간을 수동으로 초기화
    for (int i = n; i < new_n; i++)
        a[i] = i * 10;

    // 출력
    printf("확장된 배열 (realloc 후 수동 초기화):\n");
    for (int i = 0; i < new_n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);  // 메모리를 해제
}