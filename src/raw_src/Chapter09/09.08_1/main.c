#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

void menu1(void) {
    printf("Menu1 선택\n");
}
void menu2(void) {
    printf("Menu2 선택\n");
}
void menu3(void) {
    printf("Menu3 선택\n");
}
void menu4(void) {
    printf("Menu4 선택\n");
}

int main(void) {
    int m;
    void (*pf[4])(void) = { menu1, menu2, menu3, menu4 }; // 함수 포인터 정의

    printf("Menu1, Menu2, Menu3, Menu4중 하나를 선택하세요(숫자 1-4중 하나): ");
    scanf("%d", &m);
    printf("다음 메뉴가 선택되었습니다.\n");
    pf[m - 1]();
}