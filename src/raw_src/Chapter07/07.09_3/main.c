#include <stdio.h>

void func(int x[]) {  // x는 a의 주소를 가짐
    x[0] = x[0] * 10;
    printf("in func : x[0] = %d \n", x[0]);
}
int main(void) {
    int a[] = { 20 };

    func(a);    // 배열의 주소가 함수에 전달됨
    printf("in main : a[0] = %d \n", a[0]);
}