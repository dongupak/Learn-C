#include <stdio.h>

void swap(int* a, int* b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);   // 변수 x와 y의 주소를 swap() 함수에 넘겨줌
    printf("swap() 이후\n");
    printf("x = %d, y = %d\n", x, y);
}