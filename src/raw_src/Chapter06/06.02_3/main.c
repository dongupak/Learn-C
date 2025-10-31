#include <stdio.h>

int hello(int n, char* greet) { // 함수 정의부
    for (int i = 0; i < n; i++)
        printf("%s\n", greet);
}

int main(void) {
    hello(3, "안녕");  // 인자 3과 "안녕"을 넣고 함수를 호출
}