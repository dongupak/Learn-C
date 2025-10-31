#include <stdio.h>

int main() {
    int a, b;

    // a, b의 각 입력값에 대한 논리 연산 결과
    a = 0;    b = 0;
    printf("(a = %d, b = %d): a || b = %d,  a && b = %d\n", a, b, a || b, a && b);
    a = 0;    b = 1;
    printf("(a = %d, b = %d): a || b = %d,  a && b = %d\n", a, b, a || b, a && b);
    a = 1;    b = 0;
    printf("(a = %d, b = %d): a || b = %d,  a && b = %d\n", a, b, a || b, a && b);
    a = 1;    b = 1;
    printf("(a = %d, b = %d): a || b = %d,  a && b = %d\n", a, b, a || b, a && b);
}