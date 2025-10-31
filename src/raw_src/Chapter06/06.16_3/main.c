#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

// 피보나치 수열 재귀 함수
int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main(void) {
    int nterms;

    printf("몇 개의 피보나치수를 원하세요? ");
    scanf("%d", &nterms);

    if (nterms <= 0) {
        printf("오류 : 양수를 입력하세요.\n");
    }
    else {
        printf("Fibonacci 수열: ");
        for (int i = 0; i < nterms; i++) {
            printf("%d ", fibonacci(i));
        }
        printf("\n");
    }
}