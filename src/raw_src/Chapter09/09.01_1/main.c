#include <stdio.h>

int main(void) {
    int a = 1000;     // 정수형 변수 선언
    int* pa = &a;     // pa는 a의 주소를 저장
    int** ppa = &pa;  // ppa는 pa의 주소를 저장

    *pa = 2000;         // *pa는 변수 a의 값을 참조한다.
    printf("a = %d\n", a);
    printf("*pa = %d\n", *pa);

    **ppa = 3000;       // **ppa는 변수 a의 값을 참조한다.
    printf("a = %d\n", a);
    printf("*pa = %d\n", *pa);
    printf("**ppa = %d\n", **ppa);
}