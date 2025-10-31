#include <stdio.h>

void func(int x) {  // a값 20을 x에 복사함
    x = x * 10;
    printf("in func : x = %d \n", x);
}


int main(void) {
    int a = 20;

    func(a);        // a의 값 20이 전달됨
    printf("in main : a = %d \n", a);
}