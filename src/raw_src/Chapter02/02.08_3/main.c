#include <stdio.h>

#define SQUARE(x) (x * x)  // 제곱을 계산하는 함수 매크로

int main() {
    int num = 4;
    printf("%d의 제곱: %d\n", num, SQUARE(num));
    printf("%d + %d의 제곱: %d\n", num, 1, SQUARE(num + 1));  // 주의 필요
}