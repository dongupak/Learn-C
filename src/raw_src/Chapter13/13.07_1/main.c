#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE* fp;
    fp = fopen("c:\\workspace\\sample.txt", "w");  // 쓰기 모드로 파일 열기
    if (fp == NULL) {    // 향후 이 필수 코드는 생략함
        printf("파일 열기 실패\n");
        return 1;
    }

    fputc('h', fp);
    fputc('e', fp);
    fputc('l', fp);
    fputc('l', fp);
    fputc('o', fp);

    printf("sample.txt 파일에 쓰기 성공\n");
    fclose(fp);
}