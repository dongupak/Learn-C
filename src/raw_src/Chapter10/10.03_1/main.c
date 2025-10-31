#include <stdio.h>

int main() {
    int ch;

    printf("문자를 입력하세요: ");
    ch = getchar();  // 한 문자 읽기
    printf("입력한 문자는: %c\n", ch);
}