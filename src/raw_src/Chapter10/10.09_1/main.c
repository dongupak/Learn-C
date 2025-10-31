#include <stdio.h>
#include <ctype.h>

int main() {
    char ch = 'T';

    if (isupper(ch))
        printf("%c는 대문자입니다.\n", ch);
    else
        printf("%c는 대문자가 아닙니다.\n", ch);
}
