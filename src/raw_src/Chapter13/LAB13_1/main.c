#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main() {
    FILE* fp = fopen("numbers.txt", "w");  // 쓰기 모드로 파일 열기

    if (fp == NULL) {
        printf("파일을 생성할 수 없습니다.\n");
        return 1;
    }

    for (int i = 100; i <= 600; i += 100)
        fprintf(fp, "%d\n", i);  // 파일에 숫자 한 줄씩 쓰기

    fclose(fp);  // 파일 닫기
    printf("numbers.txt 파일이 성공적으로 생성되었습니다.\n");
}