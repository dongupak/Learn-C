#define _CRT_SECURE_NO_WARNINGS    // 비주얼 스튜디오에서 경고 메시지를 보고 싶지 않을 경우
#include <stdio.h>

int main(void) {
    int x, y;

    printf("두 정수를 입력하시오: ");
    scanf("%d%d", &x, &y);

    printf("%d && %d의 결과값: %d\n", x, y, x && y);
    printf("%d || %d의 결과값: %d\n", x, y, x || y);
    printf("!%d의 결과값: %d\n", x, !x);
}