#include <stdio.h>

// 전역 변수 정의
int x = 10;
void func(void) {
    extern int x;  // 함수 외부에 정의된 x 변수를 참조
    printf("x = %d\n", x);
}

int main(void) {
    func();
}