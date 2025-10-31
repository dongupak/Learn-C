#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\ex.txt", "r");

    fseek(fp, 0, SEEK_END);  // 파일 끝으로 이동
    long size = ftell(fp);   // 현재 위치(파일 크기) 얻기
    printf("파일 크기: %ld 바이트\n", size);
    fclose(fp);
}