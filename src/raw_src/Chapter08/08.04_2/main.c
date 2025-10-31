#include <stdio.h>

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = arr;

    // 포인터 연산
    printf("ptr: %p, *ptr = %d\n", ptr, *ptr);// 포인터 변수의 주소, 포인터 변수가 가리키는 값
    printf("ptr+1: %p, *(ptr+1) = %d\n", ptr + 1, *(ptr + 1)); // 포인터가 다음 요소를 가리킴
    // 배열에 +1 연산을 하자
    printf("arr+1: %p, *(arr+1) = %d\n", arr + 1, *(arr + 1));  // 
}