#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int n;    scanf("%d", &n);
    int h;    scanf("%x", &h);
    char str[256];    scanf("%s", str);

    printf("n = %d\n", n);
    printf("h(10진수) = %d, h(16진수) = %x\n", h, h);
    printf("s = %s\n", str);
}