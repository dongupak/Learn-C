#include <stdio.h>

void func() {
    int x = 10;  // 지역 변수
    // x는 func()가 호출될 때 생성되고, 종료되면 소멸됨
}

int main() {
    x = 20; // Error : 변수 x는 외부에서는 사용할 수 없음
}