#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char ch, str[256];

    printf("문자를 입력하시오 (예: A): ");
    scanf("%c", &ch);
    printf("문장을 입력하시오 (예: Hello): ");
    scanf("%s", str);

    printf("ch : %c\n", ch);
    printf("str : %s\n", str);
}