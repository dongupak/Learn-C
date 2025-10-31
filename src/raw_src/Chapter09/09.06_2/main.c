#include <stdio.h>

int inc(int x) {
    x = x + 1;
    printf("x = %d\n", x);
}

int main(void) {
    int n = 100;
    int (*pf)(int); // inc 함수를 가리키는 함수 포인터를 사용

    inc(n);        // 인자로 n을 넘겨주고 inc() 함수를 호출함
    pf = inc;      // 함수 포인터 pf가 inc() 함수를 참조함
    pf(n);         // pf를 사용하여 inc() 함수를 호출함 (*pf)(n)과 동일함
    pf = &inc;     // 함수 포인터 pf가 inc() 함수를 참조함
    pf(n);         // pf를 사용하여 inc() 함수를 호출함 (*pf)(n)과 동일함
}