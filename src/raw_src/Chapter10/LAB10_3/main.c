#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[1000];  // 입력 받을 문자열
    int length = 0;
    int upper = 0, lower = 0, digit = 0, space = 0;

    printf("문자열을 입력하세요: ");
    fgets(str, sizeof(str), stdin);  // 문자열 입력 받기

    // 문자열 분석
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\n') continue; // 개행 문자 제거
        length++;

        if (isupper(str[i]))
            upper++;
        else if (islower(str[i]))
            lower++;
        else if (isdigit(str[i]))
            digit++;
        else if (isspace(str[i]))
            space++;
    }

    printf("문자열 길이: %d\n", length);
    printf("대문자 수: %d\n", upper);
    printf("소문자 수: %d\n", lower);
    printf("숫자 수: %d\n", digit);
    printf("공백 수: %d\n", space);
}