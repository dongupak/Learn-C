#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main() {
    int num;
    printf("정수를 입력하세요: ");
    if (scanf("%d", &num) != 1)  // 입력 형식이 정수인지 확인
        printf("유효하지 않은 입력입니다.\n");
    else
        printf("입력된 정수: %d\n", num);
}