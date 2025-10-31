#include <stdio.h>

int main() {
    int m[2][3] = { {1, 2, 3}, {4, 5, 6} };

    for (int i = 0; i < 2; i++) {         // 외부 반복문: 행
        for (int j = 0; j < 3; j++) {     // 내부 반복문: 열
            printf("m[%d][%d] = %d ", i, j, m[i][j]);
        }
        printf("\n");
    }
}