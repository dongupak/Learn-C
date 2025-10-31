#include <stdio.h>

int main() {
    int arr3[][2][5] = {
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
    // 3중 반복문을 사용하여 모든 요소를 출력
    for (int i = 0; i < 3; i++) {
        printf("층 %d:\n", i);
        for (int j = 0; j < 2; j++) {
            for (int k = 0; k < 5; k++) {
                printf("%d ", arr3[i][j][k]);
            }
            printf("\n");
        }
    }
}