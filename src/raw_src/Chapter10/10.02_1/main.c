#include <stdio.h>

int main(void) {
    char ch;

    for (ch = 'A'; ch <= 'Z'; ch = ch + 1)  // 알파벳 A부터 Z까지 출력
        printf("%c", ch);   // 출력후 ch 값을 1 증가시킴
    printf("\n");
    for (ch = 65; ch <= 90; ch++)   // 아스키 코드값으로 알파벳을 출력
        printf("%c", ch);   // 출력후 ch 값을 1 증가시킴
    printf("\n");
    for (ch = 'Z'; ch >= 'A'; ch--)  // Z부터 A까지 출력
        printf("%c", ch);   // 출력후 ch 값을 1 감소시킴
}