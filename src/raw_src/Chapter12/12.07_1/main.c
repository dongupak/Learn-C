#include <stdio.h>
#include <stdlib.h>

int main() {
    // 포인터 배열 선언 : 가변 배열
    int* r[3];   // *(r[3])과 동일한 결과

    // 각 행의 크기 할당
    r[0] = (int*)malloc(2 * sizeof(int)); // 첫 번째 행의 길이: 2
    r[1] = (int*)malloc(3 * sizeof(int)); // 두 번째 행의 길이: 3
    r[2] = (int*)malloc(4 * sizeof(int)); // 세 번째 행의 길이: 4

    // 데이터 초기화
    for (int i = 0; i < 2; i++) r[0][i] = i + 10;    // 첫 번째 행
    for (int i = 0; i < 3; i++) r[1][i] = i + 20;    // 두 번째 행
    for (int i = 0; i < 4; i++) r[2][i] = i + 30;    // 세 번째 행

    // 데이터 출력
    for (int i = 0; i < 3; i++) {
        int size = (i == 0) ? 2 : (i == 1) ? 3 : 4; // 각 행의 크기
        for (int j = 0; j < size; j++) {
            printf("%d ", r[i][j]);
        }
        printf("\n");
    }

    // 메모리 해제
    for (int i = 0; i < 3; i++)
        free(r[i]);
}