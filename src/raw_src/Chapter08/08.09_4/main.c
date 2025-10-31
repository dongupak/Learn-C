#include <stdio.h>
#include <string.h>

int main(void) {
    char str[128];
    fgets(str, sizeof(str), stdin);
    str[strlen(str) - 1] = '\0';  // 문자열의 마지막 문자로 \n 대신 \0 문자를 넣어준다
    printf("입력 문자열은 %s 입니다.", str);
}