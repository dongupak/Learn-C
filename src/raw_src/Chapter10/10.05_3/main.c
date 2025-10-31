#include <stdio.h>
#include <string.h>

int main() {
    char str[] = "Hello";
    printf("strlen(str): %zu\n", strlen(str));  // 문자열의 길이 5를 반환
    printf("sizeof(str): %zu\n", sizeof(str));  // 널 문자를 포함한 크기 6을 반환
}