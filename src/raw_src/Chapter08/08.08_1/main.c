#include <stdio.h>

int main() {
    int* ptr;    // 초기화되지 않음
    *ptr = 10;   // 정의되지 않은 동작 (Segmentation Fault 가능)

    printf("%d\n", *ptr);
}