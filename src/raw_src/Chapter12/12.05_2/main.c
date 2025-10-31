#include <stdio.h>
#include <stdlib.h>

// 이중 포인터를 사용하여 메모리를 반환
void create_array(int** arr, int size) {
    *arr = (int*)malloc(size * sizeof(int)); // 메모리 할당
    if (*arr != NULL)
        for (int i = 0; i < size; i++)
            (*arr)[i] = i + 1;    // 배열 초기화
}

int main() {
    int* p = NULL;
    int size = 5;

    create_array(&p, size); // 배열 생성
    if (p != NULL) {
        printf("동적 배열: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", p[i]);
        }
        printf("\n");
        free(p); // 메모리 해제
    }
    else
        printf("메모리 할당 실패\n");
}