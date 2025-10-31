// 이중 포인터를 사용하여 main 함수의 greet 값을 변경하고자 함
#include <stdio.h>

void change_greet(char** q); // 이중 포인터 q를 사용하자
char* new_greet = "Hello";
int main(void) {
    char* greet = "Goodbye";
    printf("greet = %s \n", greet);
    change_greet(&greet);    // 함수에 포인터 변수 greet의 주소를 전달
    printf("greet = %s \n", greet);
}

// 이중 포인터 q를 이용해서 포인터 변수 greet의 주소를 받아온다
void change_greet(char** q) {
    printf("change_greet 함수 내부 : *q = %s \n", *q);  // q가 참조하는 변수의 값을 출력
    *q = new_greet;    // new_greet이 참조하는 곳의 주소를 *q에 복사
    printf("change_greet 함수 내부 : *q = %s \n", *q);
}