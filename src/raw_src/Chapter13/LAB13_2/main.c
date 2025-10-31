#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    FILE* fp = fopen("rndint.txt", "w");

    if (fp == NULL) {
        printf("파일을 생성할 수 없습니다.\n");
        return 1;
    }

    srand((unsigned int)time(NULL));  // 현재 시각 기반으로 시드 설정
    for (int i = 0; i < 10; i++) {
        int rnd = rand() % 100 + 1;   // 1~100 사이의 정수 생성
        fprintf(fp, "%d", rnd);
        if (i < 9) fprintf(fp, " ");  // 마지막 숫자 뒤에는 공백 없음
    }

    fclose(fp);
    printf("rndint.txt 파일이 성공적으로 생성되었습니다.\n");
}