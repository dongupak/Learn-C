#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    double num1, num2;

    // 사용자로부터 두 숫자 입력을 요청
    printf("첫 번째 숫자를 입력하세요: ");
    scanf("%lf", &num1);    // 사용자가 입력한 숫자를 저장
    printf("두 번째 숫자를 입력하세요: ");
    scanf("%lf", &num2);

    // 저장된 두 숫자에 대해 연산을 수행하고 결과를 출력
    printf("덧셈 결과: %.2lf\n", num1 + num2);
    printf("뺄셈 결과: %.2lf\n", num1 - num2);
    printf("곱셈 결과: %.2lf\n", num1 * num2);
    printf("나눗셈 결과: %.2lf\n", num1 / num2);
}