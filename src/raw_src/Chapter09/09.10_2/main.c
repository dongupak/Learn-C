#include <stdio.h>

// 2차원 배열을 포인터로 전달받아 출력
void print_array1(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

// 수정된 print_array2: 배열 포인터 사용
void print_array2(int(*arr)[3], int row, int col)
{
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            printf("%d ", *(*(arr + i) + j));
        }
        printf("\n");
    }
}

int main() {
    int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
    int row = sizeof(arr) / sizeof(arr[0]);       // 2차원 배열의 행의 크기
    int col = sizeof(arr[0]) / sizeof(arr[0][0]); // 2차원 배열의 열의 크기

    printf("함수를 통한 배열 원소 출력 1:\n");
    print_array1(arr, row, col);

    printf("함수를 통한 배열 원소 출력 2:\n");
    print_array2(arr, row, col);
}