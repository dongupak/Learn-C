#include <stdio.h>

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr = arr;

    // 포인터 변수와 배열의 증가 연산
    printf("++ptr: %p, *++ptr = %d\n", ++ptr, *++ptr); // 포인터 변수는 ++ 연산이 가능
    printf("++arr: %p, *++arr = %d\n", ++arr, *++arr); // 오류:배열 이름은 상수로 ++ 연산불가
}