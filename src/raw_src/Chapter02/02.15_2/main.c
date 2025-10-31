#include <stdio.h>

int main() {
    char str[5];
    printf("문자열을 입력하세요: ");
    if (scanf_s("%s", str, (unsigned int)sizeof(str)) == 1)  // 버퍼 크기 제한
        printf("입력된 문자열: %s\n", str);
    else
        printf("문자열이 버퍼 크기보다 큽니다\n");
}