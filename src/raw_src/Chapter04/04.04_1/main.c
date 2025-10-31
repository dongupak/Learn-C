#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int max;

    max = (a > b) ? a : b;  // a가 b보다 크면 a를, 그렇지 않으면 b를 선택

    printf("%d, %d 중에서 더 큰 값은 %d입니다.\n", a, b, max);
}