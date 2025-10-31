#include <stdio.h>

#define SQUARE(x) ((x) * (x))
#define PI 3.14159

int main() {
    printf("원의 면적: %.2f\n", PI * SQUARE(5));  // 매크로 치환 예정
}