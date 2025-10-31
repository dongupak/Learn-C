// 단일 포인터를 사용하여 main 함수의 greet이 참조하는 값을 new_greet이 참조하는 값으로 변경
#include <stdio.h>

void change_greet(char* q);
char* new_greet = "Hello";

int main(void) {
    char* greet = "Goodbye";
    printf("greet = %s \n", greet);
    change_greet(greet);     // 포인터 변수 greet이 저장하고 있는 값을 전달
    printf("greet = %s \n", greet);
}

void change_greet(char* q) { // 포인터 q에 greet이 가진 값이 복사된다.
    printf("change_greet 함수 내부 : q = %s \n", q);
    q = new_greet;            // q는 new_greet을 참조함
    printf("change_greet 함수 내부 : q = %s \n", q);
}