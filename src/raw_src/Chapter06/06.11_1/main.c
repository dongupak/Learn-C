#include <stdio.h>

void swap(int* a, int* b) {   // x와 y의 주소값이 포인터 변수 a, b가 가짐
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main(void) {
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    swap(&x, &y);            // x와 y의 주소값이 각각 전달됨
    printf("swap() 이후\n");
    printf("x = %d, y = %d\n", x, y);
}