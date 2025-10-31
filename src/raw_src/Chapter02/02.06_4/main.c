#include <stdio.h>

int main() {
    char str[] = "Hello";

    // 개별 문자 확인
    for (int i = 0; i < sizeof(str); i++)
        printf("str[%d] = %c (ASCII: %d)\n", i, str[i], str[i]);
}