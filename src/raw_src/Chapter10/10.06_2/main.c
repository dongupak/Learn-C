#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "applepie";
    char str2[] = "appletree";
    int result, n = 5;

    result = strncmp(str1, str2, n);  // 첫 5개의 문자만 비교
    if (result == 0)
        printf("두 문자열의 첫 %d 글자는 같습니다.\n", n);
    else if (result < 0)
        printf("%s 문자열이 %s 문자열보다 사전순으로 앞에 있음.\n", str1, str2);
    else
        printf("%s 문자열이 %s 문자열보다 사전순으로 앞에 있음.\n", str1, str2);
}