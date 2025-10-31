#include <stdio.h>
// 함수 정의
void print_chars(char ch, int n) {  // 매개변수 ch, n
    int i = 0;

    for (int i = 0; i < n; i++)
        printf("%c", ch);    // ch 문자를 n번 반복 출력함
    printf("\n");
}

int main(void) {
    print_chars('*', 50);   // 함수 호출 : *를 50번 반복 출력함
    print_chars('#', 30);   // 함수 호출 : #를 30번 반복 출력함
    return 0;
}