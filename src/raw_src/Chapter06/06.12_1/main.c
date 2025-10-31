#include <stdio.h>
#include <stdarg.h>  // va_list, va_start, va_arg, va_end가 정의되어 있음

// 가변 인자 함수 정의: count는 고정 인자, 이후는 가변 인자
int sum(int count, ...) {
    int total = 0;
    va_list args;

    va_start(args, count);  // 가변 인자 리스트 시작
    for (int i = 0; i < count; i++) {
        total += va_arg(args, int);  // 다음 인자를 int형으로 받아 더함
    }
    va_end(args);  // 가변 인자 처리 종료
    return total;
}

int main(void) {
    printf("합계1: %d\n", sum(2, 1, 2));  // 3
    printf("합계2: %d\n", sum(5, 1, 2, 3, 4, 5)); // 15
}