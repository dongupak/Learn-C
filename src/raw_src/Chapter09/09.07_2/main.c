#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int inc(int x) {
    x = x + 1;
    return x;
}
int dec(int x) {
    x = x - 1;
    return x;
}

int main(void) {
    int n = 100;
    char ch;
    int (*pf)(int);

    printf("숫자 n은 %d 입니다.\n", n);
    printf("값을 증가시킬 경우 i를 입력하세요.나머지는 값을 감소시킵니다 : ");
    scanf("%c", &ch);
    if (ch == 'i')
        pf = inc;  // 함수 포인터는 inc() 함수를 참조함
    else
        pf = dec;  // 함수 포인터는 dec() 함수를 참조함
    printf("n은 %d입니다.", pf(n));
}