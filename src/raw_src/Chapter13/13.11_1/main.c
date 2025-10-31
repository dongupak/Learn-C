#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    FILE* fp = fopen("c:\\workspace\\ex.txt", "r+");  // 읽기/쓰기 모드

    fseek(fp, 7, SEEK_SET);  // 8번째 문자부터 쓰기 시작
    fputs("NEW TEXT", fp);   // 기존 내용을 덮어씀

    fclose(fp);
}