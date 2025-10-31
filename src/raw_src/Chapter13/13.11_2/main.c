#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\ex.txt", "r+");  // 읽기/쓰기 모드

    if (fseek(fp, -5, SEEK_SET) == -1)
        printf("파일 위치 지정 오류 발생!\n");
    else
        fputs("NEW TEXT", fp);   // 기존 내용을 덮어씀

    fclose(fp);
}