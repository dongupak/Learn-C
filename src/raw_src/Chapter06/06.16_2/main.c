#include <stdio.h>

int factorial(int n) {
    if (n <= 1)  // 종료 조건
        return 1;
    else    // 재귀 호출
        return n * factorial(n - 1);
}

int main(void) {
    printf("3! : %d\n", factorial(3));
    printf("5! : %d\n", factorial(5));
}