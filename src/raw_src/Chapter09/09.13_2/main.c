#include <stdio.h>

int main() {
    int arr[3] = { 10, 20, 30 };
    void* ptr = arr; // void 포인터로 배열 시작 주소 저장

    // 명시적 형 변환 후 증가 연산
    printf("첫 번째 값: %d\n", *(int*)ptr); // 10
    ptr = (int*)ptr + 1; // int 크기(4 바이트)만큼 이동
    printf("두 번째 값: %d\n", *(int*)ptr); // 20
    ptr = (int*)ptr + 1; // 다시 int 크기(4 바이트)만큼 이동
    printf("세 번째 값: %d\n", *(int*)ptr); // 30

// 다른 표현식으로 동일한 결과를 얻을 수 있음
//   ptr = arr;
//   printf("첫 번째 값: %d\n", *(int*)ptr); // 10
//   printf("두 번째 값: %d\n", *((int*)ptr + 1)); // 20
//   printf("세 번째 값: %d\n", *((int*)ptr + 2)); // 30
}