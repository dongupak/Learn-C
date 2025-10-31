#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\sample.txt", "r");  // 읽기 모드로 파일 열기
    char buffer[100];  // 문자열을 저장할 배열

    while (fgets(buffer, sizeof(buffer), fp) != NULL)
        printf("%s", buffer);  // 파일 내용을 출력
    fclose(fp);
}