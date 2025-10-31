#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "Hello, World!";  // 공백을 포함한 문자열
    char str2[] = "";          // 빈 문자열

    size_t len1 = strlen(str1);  // str1의 길이 계산
    size_t len2 = strlen(str2);  // str2의 길이 계산

    printf("\"%s\"의 길이: %zu\n", str1, len1);
    printf("\"%s\"의 길이: %zu\n", str2, len2);
}