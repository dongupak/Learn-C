#include <stdio.h>
int main() {
    int arr[2][3] = { {10, 20, 30},{40, 50, 60} };

    // 포인터를 이용한 수정
    *(*(arr + 1) + 2) = 10; // arr[1][2]를 10으로 수정
    printf("배열 요소 출력:\n");
    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}