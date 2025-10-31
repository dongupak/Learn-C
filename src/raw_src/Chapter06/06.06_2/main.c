#include <stdio.h>

void func(void) {
    int x = 10;  // func()의 지역 변수 x
    printf("in func : x = %d\n", x);
}
int main(void) {
    int x = 20;  // main()의 지역 변수 x 
    printf("in main : x = %d\n", x);
    func();
    printf("in main : x = %d\n", x);
}