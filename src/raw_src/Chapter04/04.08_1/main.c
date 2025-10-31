#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int number;

    printf("양수를 입력하세요: ");
    scanf("%d", &number);
    if (number < 0)
        goto error;  // number가 음수면 error 라벨로 이동

    printf("입력한 값은 %d입니다.\n", number);
    return 0;
error:   // error 라벨
    printf("오류: 양수를 입력해야 합니다.\n");
    return 1;
}