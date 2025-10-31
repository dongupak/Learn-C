#include <stdio.h>

// 배열 인덱스를 사용하여 2차원 배열의 전체 원소의 평균을 계산하자
double get_avg(int arr[][3], int row, int col) {
    double sum = 0.0, avg;

    for (int r = 0; r < row; r++)      // 행 반복
        for (int c = 0; c < col; c++)  // 열 반복
            sum += arr[r][c];
    avg = sum / (row * col);          // 평균 계산
    return avg;
}

int main() {
    int arr[][3] = { {10, 20, 30}, {40, 50, 60} };
    int row = sizeof(arr) / sizeof(arr[0]);       // 2차원 배열의 행의 크기
    int col = sizeof(arr[0]) / sizeof(arr[0][0]); // 2차원 배열의 열의 크기

    printf("평균 값 : %.2f\n", get_avg(arr, 2, 3));
}