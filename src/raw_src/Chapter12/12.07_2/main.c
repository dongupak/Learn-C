#include <stdio.h>
#include <stdlib.h>

int main() {
    // 이중 포인터 선언 : 가변 배열
    int** r;
    // 행의 수
    int rows = 3;

    // 행을 가리킬 메모리 할당
    r = (int**)malloc(rows * sizeof(int*));
    if (r == NULL) {
        printf("메모리 할당 실패\n");
        return 1;
    }

    // 각 행의 메모리 할당
    r[0] = (int*)malloc(2 * sizeof(int)); // 첫 번째 행의 길이: 2
    r[1] = (int*)malloc(3 * sizeof(int)); // 두 번째 행의 길이: 3
    r[2] = (int*)malloc(4 * sizeof(int)); // 세 번째 행의 길이: 4

    // 메모리 할당 실패 확인
    for (int i = 0; i < rows; i++) {
        if (r[i] == NULL) {
            printf("메모리 할당 실패\n");
            return 1;
        }
    }

    // 데이터 초기화
    for (int i = 0; i < 2; i++) r[0][i] = i + 10;  // 첫 번째 행
    for (int i = 0; i < 3; i++) r[1][i] = i + 20;  // 두 번째 행
    for (int i = 0; i < 4; i++) r[2][i] = i + 30;  // 세 번째 행

    // 데이터 출력
    for (int i = 0; i < rows; i++) {
        int size = (i == 0) ? 2 : (i == 1) ? 3 : 4; // 각 행의 크기
        for (int j = 0; j < size; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < rows; i++)
        free(r[i]); // 각 행의 메모리 해제
    free(r); // r 메모리 해제
}