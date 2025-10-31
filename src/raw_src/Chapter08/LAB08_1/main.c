#include <stdio.h>

int main() {
    int x = 10;
    int* ptr = NULL;

    // ptr이 x를 가리키도록 설정하고, x를 두 배로 만드시오.
    ptr = &x;
    printf("x의 주소값: %p\n", &x); // 출력: x의 주소값
    printf("ptr의 값: %p\n", ptr); // 출력: x의 주소값
    *ptr = *ptr * 2;
    printf("x 값을 2배로 만들자 : x = %d\n", x); // 출력: x의 값: 20
    *ptr = *ptr * 3;
    printf("x 값을 3배로 만들자 : x = %d\n", x); // 출력: x의 값: 60
}