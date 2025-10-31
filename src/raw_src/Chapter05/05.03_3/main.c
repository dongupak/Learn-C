#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>  // [코드 1]

int main(void) {
    // 변수 선언시에 초기화
    int fac = 1, i = 1, n;

    scanf("%d", &n);
    for (; i <= n; i++)
        fac = fac * i;
    printf("%d!은 %d입니다.", n, fac);
}