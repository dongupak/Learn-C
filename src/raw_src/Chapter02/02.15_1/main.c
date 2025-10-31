#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num1, num2;
    float real;

    printf("정수 2개와 실수를 입력하세요 (예: 10 20 3.5): ");
    scanf("%d %d %f", &num1, &num2, &real);
    printf("입력된 데이터:\n");
    printf("첫 번째 정수: %d\n", num1);
    printf("두 번째 정수: %d\n", num2);
    printf("실수: %.2f\n", real);
}