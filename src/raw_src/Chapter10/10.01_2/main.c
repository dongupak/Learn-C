#include <stdio.h>

int main(void) {
    char str2[] = "Hello";   // NULL 문자를 포함하여 크기 6으로 초기화 됨
    char str3[8] = "Hello";

    printf("str2 = %s, sizeof(str2) = %ld\n", str2, sizeof(str2));
    // 'o' 문자 다음에 3개의 널 문자가 있음
    printf("str3 = %s, sizeof(str3) = %ld\n", str3, sizeof(str3));
}