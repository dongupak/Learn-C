#include <stdio.h>

int main() {
    char ch = 'A'; // 문자 리터럴
    printf("문자: %c, ASCII 값: %d\n", ch, ch);   // 출력: A, 65
    // 문자 연산
    char next = ch + 1;            // 'A' 다음 문자
    printf("다음 문자: %c, ASCII 값: %d\n", next, next); // 출력: B
}