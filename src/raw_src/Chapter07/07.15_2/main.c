#include <stdio.h>

#define DEPTH 3  // 층 개수
#define ROWS 2   // 행 개수
#define COLS 5   // 열 개수

int main() {
    // 3차원 배열 선언 및 초기화
    int arr3[DEPTH][ROWS][COLS] = {
        {
            {0, 1, 2, 3, 4},
            {5, 6, 7, 8, 9},
        },
        {
            {4, 5, 6, 7, 8},
            {8, 9, 10, 11, 12},
        },
        {
            {5, 6, 7, 8, 9},
            {1, 2, 3, 4, 5},
        }
    };

    // 행별 합 계산 및 출력
    for (int i = 0; i < DEPTH; i++) {
        for (int j = 0; j < ROWS; j++) {
            int row_sum = 0;  // 현재 행의 합 초기화

            // 현재 행의 모든 열 값을 합산
            for (int k = 0; k < COLS; k++) {
                row_sum += arr3[i][j][k];
            }

            // 행의 합 출력
            printf("층 %d, 행 %d의 합: %d\n", i, j, row_sum);
        }
    }
}