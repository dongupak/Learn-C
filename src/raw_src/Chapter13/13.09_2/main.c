#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void) {
    FILE* fp = fopen("c:\\workspace\\binary.dat", "rb");  // 바이너리 읽기 모드

    int numbers[5];
    fread(numbers, sizeof(int), 5, fp);  // 5개의 정수 읽기

    for (int i = 0; i < 5; i++)
        printf("%d ", numbers[i]);
    printf("\n");

    fclose(fp);
}