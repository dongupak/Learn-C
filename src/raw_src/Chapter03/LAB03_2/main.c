#define _CRT_SECURE_NO_WARNINGS
// 윤년이면 1을 반환하고 아니면 0을 반환
#include <stdio.h>

int main(void) {
    int year, result;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    printf("result = %d\n", result);
}