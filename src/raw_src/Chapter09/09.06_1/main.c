#include <stdio.h>

int inc(int x) {
    x = x + 1;
    printf("x = %d\n", x);
}

int main(void) {
    int n = 100;
    inc(n);     // 인자로 n을 넘겨주고 inc 함수를 호출함
    int (*pf)(int) = inc;
    (*pf)(n); // inc 함수를 가리키는 함수 포인터를 사용
}