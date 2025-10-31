// 가변 길이 배열은 c11 표준으로 visual studio에서 지원하지 않음.
#include <stdio.h>

int main() {
    int rows = 2, cols = 5;
    int arr[rows][cols] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    // 각 행의 합 계산 및 출력
    for (int i = 0; i < rows; i++) {
        int sum = 0;
        for (int j = 0; j < cols; j++)
            sum += arr[i][j];
        printf("행 %d의 합: %d\n", i, sum);
    }
}