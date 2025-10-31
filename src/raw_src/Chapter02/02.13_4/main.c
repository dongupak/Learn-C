#include <stdio.h>

int main() {
    char str1[] = "Hello";
    char str2[] = "World";
    printf("오른쪽 정렬: |%10s|\n", str1);
    printf("왼쪽 정렬:  |%-10s|\n", str2);
}