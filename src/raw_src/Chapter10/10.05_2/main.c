#include <stdio.h>
#include <string.h>
int main() {
    char str[10] = "Hello";
    printf("strlen(str): %zu\n", strlen(str));  // 문자열의 길이 5를 반환
    printf("sizeof(str): %zu\n", sizeof(str));  // 문자열 배열의 크기 10을 반환
}