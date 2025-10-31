#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num, place = 1; // place는 자리수를 나타냄

    // 사용자 입력
    printf("임의의 십진수를 입력하세요: ");
    scanf("%d", &num);

    // 각 자리수를 출력
    printf("각 자리수 출력:\n");
    while (num > 0) {
        int digit = num % 10;       // 1의 자리 추출
        printf("%7d의 자리수: %d\n", place, digit);
        num /= 10;                  // 다음 자리로 이동
        place *= 10;                // 자리수 증가
    }
}