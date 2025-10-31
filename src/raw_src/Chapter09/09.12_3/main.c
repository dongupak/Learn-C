#include <stdio.h>

int main() {
    int a = 10;
    float b = 3.14;
    void* ptr; // void 포인터 선언

    ptr = &a; // int 형 변수의 주소 저장
    printf("int 값: %d\n", *(int*)ptr); // int 형 변환 후 값 출력
    ptr = &b; // float 형 변수의 주소 저장
    printf("float 값: %.2f\n", *(float*)ptr); // float 형 변환 후 값 출력
}