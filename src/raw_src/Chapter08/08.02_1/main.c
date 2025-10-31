#include <stdio.h>

int main() {
    int a = 10;        // 정수형 변수 선언 및 초기화
    int* p = &a;       // 변수 a의 메모리 주소를 p에 저장(포인터 선언)

    printf("변수 a의 값: %d\n", a);           // 변수의 실제 값 출력
    printf("변수 a의 메모리 주소: %p\n", &a);  // 변수 a의 메모리 주소 출력
    printf("포인터 p의 값: %p\n", p);         // 포인터 변수 p의 값 출력
    printf("포인터 p가 가리키는 값: %d\n", *p); // 포인터를 통해 변수 a의 값 출력
}