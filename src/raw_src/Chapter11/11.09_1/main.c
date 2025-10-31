#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main() {
    // 쓰기 모드로 파일 열기
    FILE* fp = fopen("hello.txt", "w");
    if (fp == NULL) {
        printf("파일을 열 수 없습니다.\n");
        return 1;
    }

    fprintf(fp, "Hello, world!\n");  // 파일에 문자열 쓰기

    fclose(fp);  // 파일 닫기
    printf("파일 저장 완료!\n");
}