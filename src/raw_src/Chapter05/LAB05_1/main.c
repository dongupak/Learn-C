#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int n;

    // 사용자 입력 및 검증
    do {
        printf("100부터 999까지의 정수를 입력하세요: ");
        scanf("%d", &n);
        if (n < 100 || n > 999) {
            printf("잘못된 입력입니다. 다시 입력하세요.\n");
        }
    } while (n < 100 || n > 999);

    // 자리수 계산
    int hundreds = n / 100;         // 백의 자리
    int tens = (n / 10) % 10;       // 십의 자리
    int ones = n % 10;              // 일의 자리

    // 결과 출력
    printf("입력한 정수: %d\n", n);
    printf("백의 자리: %d\n", hundreds);
    printf("십의 자리: %d\n", tens);
    printf("일의 자리: %d\n", ones);
}