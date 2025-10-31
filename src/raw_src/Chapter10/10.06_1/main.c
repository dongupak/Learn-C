#include <stdio.h>
#include <string.h>
int main() {
    char str1[] = "apple", str2[] = "banana";
    int result;

    result = strcmp(str1, str2);
    printf("str1 - str2 = %d\n", result);
    if (result == 0)
        printf("두 문자열은 같습니다.\n");
    else if (result < 0)
        printf("%s 문자열이 %s 문자열보다 사전순으로 앞에 있음.\n", str1, str2);
    else
        printf("%s 문자열이 %s 문자열보다 사전순으로 앞에 있음.\n", str1, str2);
}