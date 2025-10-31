#include <stdio.h>

#define SIZE  3

int main(void) {
    int a[SIZE] = { 100, 200, 300 };
    int b[SIZE] = { 40, 50, 60 };
    int c[SIZE];
    // a 배열의 원소와 b 배열의 원소의 합을 구한다
    for (int i = 0; i < SIZE; i++)
        c[i] = a[i] + b[i];

    printf("배열 c: ");
    for (int i = 0; i < SIZE; i++)
        printf("%d ", c[i]);
}