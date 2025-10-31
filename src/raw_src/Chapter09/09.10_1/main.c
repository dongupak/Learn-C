#include <stdio.h>

int main() {
    int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
    int* ptr = &arr[0][0]; // 2차원 배열을 1차원 포인터로 참조

    printf("1차원 포인터로 접근: ");
    for (int i = 0; i < 6; i++)
        printf("%d ", *(ptr + i)); // 1차원 배열처럼 접근
}