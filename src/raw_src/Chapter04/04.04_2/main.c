#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    printf("숫자를 입력하세요: ");
    scanf("%d", &num);

    (num % 2 == 0) ? printf("짝수입니다.\n") : printf("홀수입니다.\n");
}