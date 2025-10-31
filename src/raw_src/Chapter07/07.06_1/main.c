#include <stdio.h>

#define SIZE_A  3
#define SIZE_B  4
#define SIZE_C  (SIZE_A + SIZE_B)

int main(void) {
    int a[SIZE_A] = { 10, 20, 30 };
    int b[SIZE_B] = { 50, 60, 70, 80 };
    int c[SIZE_C];

    for (int i = 0; i < SIZE_A; i++)
        c[i] = a[i];           // a 배열 원소 3개를 c 배열에 복사
    for (int i = 0; i < SIZE_B; i++)
        c[SIZE_A + i] = b[i];  // 이어서 b 배열 원소 4개를 c 배열에 복사

    printf("배열 c: ");
    for (int i = 0; i < SIZE_C; i++)
        printf("%d ", c[i]);
}