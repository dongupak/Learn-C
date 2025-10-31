#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("example.txt", "w");  // 쓰기 모드로 파일 열기
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return -1;
    }

    fprintf(fp, "Hello, world!\n");  // 파일에 문자열 쓰기
    fprintf(fp, "정수: %d, 실수: %.2f, 문자: %c\n", 42, 3.14, 'A');
    fclose(fp);   // 파일 닫기
}