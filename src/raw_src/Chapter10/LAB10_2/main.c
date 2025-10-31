#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <ctype.h>  // toupper 함수 사용을 위해 필요

int main() {
    char str[1000];

    printf("문자열을 입력하세요: ");   // 입력을 받기위한 프롬프트
    fgets(str, sizeof(str), stdin);  // 문자열 입력 받기 (공백 포함)
    // 문자열 변환
    for (int i = 0; str[i] != '\0'; i++) {
        // 소문자인 경우에만 대문자로 변환
        if (islower(str[i]))
            str[i] = toupper(str[i]);
    }
    printf("위의 문장을 대문자 문장으로 변환한 결과\n");
    printf("%s", str);
}
