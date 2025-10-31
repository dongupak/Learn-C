#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int age;
    float temp;

    printf("나이를 입력하세요: ");
    scanf("%d", &age);
    printf("체온을 입력하세요(℃): ");
    scanf("%f", &temp);

    if (age >= 65 && temp >= 37.5)
        printf("병원 방문을 권장합니다.\n");
    else
        printf("정상입니다.\n");

    return 0;
}