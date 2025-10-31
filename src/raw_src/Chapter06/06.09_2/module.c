#include <stdio.h>

// 전역 변수 정의
int shrd = 42;

void print_value(void) {
    printf("module의 shrd = %d\n", shrd);
}