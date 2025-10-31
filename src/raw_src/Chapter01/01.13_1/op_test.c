/*
 op_test.c :
 이 프로그램은
 변수 num1과 num2에 값을 할당한 후, 이 두 변수의 덧셈 결과를 출력한다
*/
#include <stdio.h>

int main(void) {
    int num1 = 8, num2 = 4, result;

    printf("num1 = %d num2 = %d 일 때\n", num1, num2);
    result = num1 + num2;
    printf("num1 + num2 = %d \n", result);
}