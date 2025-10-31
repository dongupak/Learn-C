#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    FILE* fp = fopen("c:\\workspace\\binary.dat", "wb");  // 바이너리 쓰기 모드

    int numbers[] = { 10, 20, 30, 40, 50 };
    fwrite(numbers, sizeof(int), 5, fp);  // 5개의 정수 저장

    fclose(fp);
    printf("이진 파일 저장 완료!\n");
}