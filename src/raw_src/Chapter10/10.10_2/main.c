#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>

int main() {
    char src[] = "Hello, World!";
    char dst[120];  // 충분한 크기의 배열을 준비함

    // 최대 5개의 문자를 src에서 dst로 복사
    strncpy(dst, src, 5);
    dst[5] = '\0';  // 널 문자를 수동으로 추가하여 안전하게 종료

    printf("src: %s\n", src);
    printf("dst: %s\n", dst);
}