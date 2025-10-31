#include <stdio.h>

int hello() { // 함수 정의부
    printf("안녕하세요\n");  // 함수 몸체
}

int main(void) {
    hello();  // 함수 호출 1
    hello();  // 함수 호출 2
}