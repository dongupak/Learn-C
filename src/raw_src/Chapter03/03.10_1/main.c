#include <stdio.h>

int main() {
    int x = 20;

    printf("x = %d입니다\n", x);
    x += 10;   // x = x + 10;
    printf("x += 10; 의 결과 x = %d\n", x);
    x -= 10;    // x = x - 10;
    printf("x -= 10; 의 결과 x = %d\n", x);
}