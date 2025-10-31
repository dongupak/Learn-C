#include <stdio.h>

int main() {
    int a = 10;
    int* p = &a;  // 포인터 p는 변수 a의 주소를 가리킴

    printf("a의 초기 값: %d\n", a);
    *p = 20;      // 포인터가 가리키는 주소에 있는 변수의 값을 역참조를 통해 변경
    printf("포인터를 통해 변경된 a의 값: %d\n", a);
}