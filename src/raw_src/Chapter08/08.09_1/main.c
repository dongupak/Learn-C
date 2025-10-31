#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    char str[256];

    printf("문자를 입력하시오 : ");
    scanf("%s", str);
    printf("입력된 문자 : %s", str);
}