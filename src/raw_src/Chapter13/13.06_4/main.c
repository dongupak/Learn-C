#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("non_existing_file.txt", "r");
    if (fp == NULL) {
        fprintf(stderr, "파일을 열 수 없습니다.\n");  // stderr로 출력
        return 1;
    }
    fclose(fp);
}