#include <stdio.h>

int main() {
    int ch;

    printf("문자들을 입력하세요 (종료: EOF 또는 Ctrl+Z, Ctrl+D):\n");
    while ((ch = getchar()) != EOF) // EOF 입력 시 종료
        printf("입력한 문자: %c\n", ch);

    printf("입력이 종료되었습니다.\n");
}