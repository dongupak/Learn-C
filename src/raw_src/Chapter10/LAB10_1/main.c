#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void) {
    char str[512];
    char delim[] = "+-/*= ";
    char* ptr;

    printf("수식을 입력하세요: ");      // 사용자 입력
    fgets(str, sizeof(str), stdin);  // stdin은 표준 입출력 장치(키보드)임
    ptr = strtok(str, delim);       // 구분자는 "+-/*= "입니다.
    while (ptr != NULL) {
        printf("%s\n", ptr);
        ptr = strtok(NULL, delim);
    }
}