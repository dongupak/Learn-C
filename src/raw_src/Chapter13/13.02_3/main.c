#define _CRT_SECURE_NO_WARNINGS 
#include <stdio.h>

int main(void) {
    char ch;
    char str1[80], str2[80];

    printf("스페이스로 분리된 문자열을 입력하시오: ");
    scanf("%s%c%s", str1, &ch, str2);  // scanf()에서 공백이 없는 경우

    printf("입력된 첫번째 문자열 = %s\n", str1);
    printf("입력된 문자 = %c\n", ch);
    printf("입력된 두번째 문자열 = %s\n", str2);
}