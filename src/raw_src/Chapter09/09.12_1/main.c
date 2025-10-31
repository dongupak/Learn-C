#include <stdio.h>

int main(void) {
    char a[] = "Dog";
    char b[] = "Cat";
    const char* p = a;  // p가 가리키는 내용이 변경되지 않음
    char* const q = a;  // 포인터 q가 변경되지 않음
    //p[0]='F';         // 오류 : p가 가리키는 내용은 변경할 수 없다

    printf("p = %s\n", p);
    p = b;    // p는 새로운 문자열 배열 b를 참조할 수 있다
    printf("p = %s\n", p);

    printf("q = %s\n", q);
    q[0] = 'F'; // q가 참조하는 값은 변경가능
    printf("q = %s\n", q);
    //q = b;  // 오류 : q는 문자열 배열 b를 참조할 수 없다
}