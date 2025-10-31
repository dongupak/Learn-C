#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int number ;

    printf("숫자를 입력하세요: ");
    scanf("%d", &number);

    if (number % 2 == 0)
        printf("입력한 숫자는 짝수입니다.\n");
    else
        printf("입력한 숫자는 홀수입니다.\n");
}