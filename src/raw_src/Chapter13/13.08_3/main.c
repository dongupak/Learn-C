#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char input[100];

    printf("문장을 입력하세요: ");
    fgets(input, sizeof(input), stdin);  // 문자열 입력 받기

    // 개행 문자 제거
    size_t len = strlen(input);
    if (len > 0 && input[len - 1] == '\n') {
        input[len - 1] = '\0';
    }

    printf("입력된 문장: %s\n", input);
    return 0;
}