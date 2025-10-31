#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\ex.txt", "r");

    fseek(fp, 4, SEEK_SET);  // 파일 시작 위치에서 4바이트 이동
    char ch = fgetc(fp);  // 현재 위치에서 한 문자 읽기
    printf("5번째 문자: %c\n", ch);

    fclose(fp);
}