#include <stdio.h>

int main() {
    int arr[3] = { 10, 20, 30 };
    void* ptr1 = arr; // void 포인터로 배열 시작 주소 저장
    void* ptr2 = arr; // void 포인터로 배열 시작 주소 저장

    // 명시적 형 변환 후 증가 연산
    printf("ptr1의 주소: %p\n", ptr1);
    ptr1 = (char *)ptr1 + 1;           // 1 만큼 이동
    printf("== ptr1 = (char *)ptr1 + 1;의 결과 ==\n");
    printf("증가된 ptr1의 주소: %p\n\n", ptr1);

    // 명시적 형 변환 후 증가 연산
    printf("ptr2의 주소: %p\n", ptr2);
    ptr2 = (int*)ptr2 + 1;    // int 크기(4바이트)만큼 이동
    printf("== ptr2 = (int *)ptr2 + 1;의 결과 ==\n");
    printf("증가된 ptr2의 주소: %p\n", ptr2);
}