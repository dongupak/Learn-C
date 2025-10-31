#include <stdio.h>

int main() {
    char ch1 = 'A', ch2 = 'C';

    // 더하기 연산
    char next_char = ch1 + 1;  // 'A'의 다음 문자
    printf("'%c(%d)' + 1 = '%c(%d)'\n", ch1, ch1, next_char, next_char);

    // 빼기 연산
    char prev_char = ch2 - 1;  // 'C'의 이전 문자
    printf("'%c(%d)' - 1 = '%c(%d)'\n", ch2, ch2, prev_char, prev_char);

    // 두 char 값의 차이 계산
    int diff1 = ch2 - ch1;
    printf("'%c(%d)' - '%c(%d)' = %d\n", ch2, ch2, ch1, ch1, diff1);
    // 두 문자 'a'와 'A' 값의 차이 계산
    ch1 = 'A', ch2 = 'a';
    int diff2 = ch2 - ch1;
    printf("'%c(%d)' - '%c(%d)' = %d\n", ch2, ch2, ch1, ch1, diff2);
}