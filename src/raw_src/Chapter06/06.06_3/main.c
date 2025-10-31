#include <stdio.h>

int x = 20;  // 전역 변수 : 프로그램 전체에서 사용가능한 변수

void func(void) {
    x = 10;  // 전역 변수 x에 10을 할당
    printf("in func : x = %d\n", x);
}

int main(void) {
    printf("in main : x = %d\n", x);
    func();
    printf("in main : x = %d\n", x);
}