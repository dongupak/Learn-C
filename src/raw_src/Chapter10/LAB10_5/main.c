#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 2진수 문자열을 10진수 정수로 변환하는 함수
long binary_to_decimal(const char* bin) {
    long result = 0;
    while (*bin == '0' || *bin == '1') {
        result = result * 2 + (*bin - '0');
        bin++;
    }
    return result;
}

int main() {
    char input[100];
    char* binary_part;
    long decimal;

    // 사용자로부터 입력 받기
    printf("2진수를 입력하세요 (예: 0b1101): ");
    fgets(input, sizeof(input), stdin);
    input[strlen(input) - 1] = '\0'; // 개행 문자 제거


    // 접두사 확인
    if (strncmp(input, "0b", 2) == 0 || strncmp(input, "0B", 2) == 0) {
        binary_part = input + 2;  // 접두사 건너뛰기
        // 2진수를 10진수로 변환
        decimal = binary_to_decimal(binary_part);

        // 결과 출력
        printf("10진수: %ld\n", decimal);
        printf(" 8진수: %lo\n", decimal);  // 'o'는 8진수 출력 포맷
        printf("16진수: %lX\n", decimal);  // 'X'는 대문자 16진수 출력
    }
    else {
        printf("잘못된 형식입니다. 0b 또는 0B로 시작해야 합니다.\n");
    }

    return 0;
}