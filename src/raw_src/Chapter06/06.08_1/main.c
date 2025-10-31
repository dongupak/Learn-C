#include <stdio.h>

void func(void) {
    int x = 10;  // func()의 지역 변수 x가 메모리에서 생성되고 초기화됨
    printf("in func : x = %d\n", x);
    x++;
    printf("after x++ : x = %d\n", x);
}   // x의 생존 기간이 종료, 메모리에서 소멸

int main(void) {
    func();
    func();  // func() 함수를 다시 호출함 : 함수 내의 자동 변수는 새로 생성되고 초기화됨
}