#include <stdio.h>
#define PI 3.14159
#define SQUARE(x) ((x) * (x))
#define MAX(a, b) ((a) > (b) ? (a) : (b))

int main() {
    printf("원의 면적: %.2f\n", PI * SQUARE(5));
    printf("10과 20 중 더 큰 값: %d\n", MAX(10, 20));
}