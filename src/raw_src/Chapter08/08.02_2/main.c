#include <stdio.h>

int main(void) {
    int a = 10;
    double d = 122.4;
    int* pa = NULL;    // 포인터 변수의 초기값이 NULL
    double* pd = NULL; // 포인터 변수의 초기값이 NULL

    pa = &a;           // 포인터 변수 pa가 a를 참조함
    pd = &d;           // 포인터 변수 pd가 d를 참조함
    printf("pa:%p  &a:%p\n", pa, &a);    // pa와 a의 주소
    printf("pd:%p  &d:%p\n", pd, &d);    // pd와 d의 주소
    printf("a: %d,  *pa: %d\n", a, *pa); // a와 *pa 값, 직접 접근과 역참조로 접근
    printf("d: %5.1f,  *pd:%5.1f\n", d, *pd); // d와 *pd 값, 직접 접근과 역참조로 접근
}