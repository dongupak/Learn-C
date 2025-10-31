#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int height;

    // 피라미드의 높이 입력 받기
    printf("피라미드의 높이를 입력하시오 : ");
    scanf("%d", &height);
    // 피라미드 출력
    for (int i = 0; i < height; i++) {
        // 공백 출력
        for (int j = 0; j < height - i - 1; j++)
            printf(" ");
        // '+' 출력
        for (int k = 0; k < 2 * i + 1; k++)
            printf("+");
        printf("\n");  // 줄 바꿈
    }
}