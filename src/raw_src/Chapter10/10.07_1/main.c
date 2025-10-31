#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    char input[20];
    char password[] = "secure";

    printf("비밀번호를 입력하세요: ");
    scanf("%s", input);
    if (strcmp(input, password) == 0)
        printf("비밀번호가 일치합니다.\n");
    else
        printf("비밀번호가 일치하지 않습니다.\n");
}