#include <stdio.h>

int main(void) {
    char str[128];

    fgets(str, sizeof(str), stdin);
    printf("입력 문자열은 %s 입니다.", str);
}