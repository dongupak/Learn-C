#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char password[256];
    const char correct_password[] = "secure314";

    printf("비밀번호를 입력하세요: ");
    scanf("%s", password);

    if (strcmp(password, correct_password) == 0)
        printf("비밀번호가 맞습니다. 로그인 성공.\n");
    else
        printf("비밀번호가 틀렸습니다.\n");
}