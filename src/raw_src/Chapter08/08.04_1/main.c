#include <stdio.h>

int main() {
    int arr[5] = { 10, 20, 30, 40, 50 };
    int* ptr1 = arr, * ptr2 = &arr[0];    // 배열 이름과 첫 번째 요소 arr[0] 주소를 포인터에 할당

    printf("배열이름 arr: %p\n", arr);    // arr은 배열의 첫 번째 원소의 주소를 가리킴
    printf("포인터 ptr1: %p\n", ptr1);    // ptr1은 arr과 같은 주소를 가리킴
    printf("포인터 ptr2: %p\n", ptr2);    // ptr2는 arr과 같은 주소를 가리킴
    printf("arr[0]: %d, *ptr1: %d  ptr2[0]: %d\n", arr[0], *ptr1, ptr2[0]);  // 동일한 값
}