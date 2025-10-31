#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  // [코드 2]

int main(void) {
    int fac, i, n; // 초기화하지 않음

    scanf("%d", &n);
    // for 문 초기식에서 초기화
    for (fac = 1, i = 1; i <= n; i++)
        fac = fac * i;
    printf("%d!은 %d입니다.", n, fac);
}