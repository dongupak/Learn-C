#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";  // 원본 문자열
    char dst[250];  // 충분한 크기의 배열을 준비함

    strcpy(dst, src);  // src 문자열을 dst에 복사함

    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
}