#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int year, result;

    printf("연도를 입력하시오: ");
    scanf("%d", &year);

    result = ((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0);
    if (result == 1)
        printf("%d년은 윤년입니다\n", year);
    else
        printf("%d년은 윤년이 아닙니다\n", year);
}