#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 소수 판별 함수
int is_prime(int n) {
    if (n < 2) return 0;  // 0과 1은 소수가 아님
    for (int i = 2; i * i <= n; i++)
        if (n % i == 0) return 0;  // 약수가 있으면 소수 아님
    return 1;  // 나누어 떨어지는 수가 없으면 소수
}

int main(void) {
    int number;

    printf("정수를 입력하세요: ");
    scanf("%d", &number);

    if (is_prime(number))
        printf("%d은(는) 소수입니다.\n", number);
    else
        printf("%d은(는) 소수가 아닙니다.\n", number);
}