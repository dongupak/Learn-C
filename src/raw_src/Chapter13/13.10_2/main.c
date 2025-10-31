#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\ex.txt", "r");

    fseek(fp, -6, SEEK_END);  // 파일 끝에서 6바이트 이전으로 이동
    char ch = fgetc(fp);      // 현재 위치에서 한 문자 읽기
    printf("파일 끝에서 6 바이트 이전 문자: %c\n", ch);

    fclose(fp);
}