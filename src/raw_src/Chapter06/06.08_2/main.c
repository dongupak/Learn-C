#include <stdio.h>

void func(void) {
    static int x = 10;  // func()의 정적 변수 x가 메모리에서 생성됨
    printf("in func : x = %d\n", x);
    x++;
    printf("after x++ : x = %d\n", x);
}   // 정적 변수 x는 함수를 벗어나도 메모리에서 소멸되지 않음

int main(void) {
    func();
    func();   // func() 함수를 다시 호출함 : 함수 내의 정적 변수는 이전 값을 유지함
}