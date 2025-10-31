#include <stdio.h>

int main(void) {
    char str[128];

    gets(str);  // 최신 컴파일러에서는 사용안됨
    printf("%s", str);
}