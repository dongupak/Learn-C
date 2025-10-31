#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main() {
    char dst[50] = "computer";  // 초기 문자열을 가진 배열
    char src[] = " program";    // 연결할 문자열

    strcat(dst, src);           // src 문자열을 dst에 연결
    printf("연결된 문자열: %s\n", dst);
}