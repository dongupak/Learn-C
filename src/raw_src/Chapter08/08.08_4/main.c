#include <stdio.h>

int main() {
    char arr[5] = { 'A', 'B', 'C', 'D', 'E' };
    int* ptr = (int*)arr;  // 잘못된 타입 변환

    printf("%c\n", *ptr);  // 잘못된 메모리 참조
    ptr++;    // 'A'원소의 인접 원소 'B'로 이동하지 않음 
    printf("%c\n", *ptr);  // 잘못된 메모리 참조
}