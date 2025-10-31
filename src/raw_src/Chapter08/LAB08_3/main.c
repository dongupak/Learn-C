#include <stdio.h>

int get_length(const char* str) {
    int length = 0;
    while (*str++ != '\0')
        length++;
    return length;
}

int main() {
    char* str1 = "Hello";
    char* str2 = "Hello, World!";
    int len = get_length(str1);
    printf("%s 문자열의 길이: %d\n", str1, len); // 출력: 문자열의 길이: 5
    len = get_length(str2);
    printf("%s 문자열의 길이: %d\n", str2, len); // 출력: 문자열의 길이: 13
}