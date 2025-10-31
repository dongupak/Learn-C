#include <stdio.h>

#define ARRAY_SIZE  3
// 포인터 변수 a, b는 main 함수의 배열 m, n을 참조함
void copy_array(int* a, int* b, int size) {
    for (int i = 0; i < size; i++)
        *b++ = *a++;   // 포인터 a가 참조하는 원소를 포인터 b에 넣음
}

int main(void) {
    int m[ARRAY_SIZE] = { 10, 20, 30 };
    int n[ARRAY_SIZE] = { 0 };
    int i;

    for (i = 0; i < ARRAY_SIZE; i++)
        printf("m[%d] = %d, n[%d] = %d\n", i, m[i], i, n[i]);
    copy_array(&m[0], &n[0], ARRAY_SIZE);
    printf("배열 복사 결과\n");
    for (i = 0; i < ARRAY_SIZE; i++)
        printf("m[%d] = %d, n[%d] = %d\n", i, m[i], i, n[i]);
}