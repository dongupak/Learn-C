#include <stdio.h>

int hello(int n) { // 함수 정의부
    for (int i = 0; i < n; i++)
        printf("안녕하세요\n");
}

int main(void) {
    hello(3);  // 인자 3을 넣고 함수를 호출
}