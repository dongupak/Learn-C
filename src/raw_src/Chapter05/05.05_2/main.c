#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int i = 0;

    do {
        printf("1---새 파일      2---파일 열기\n");
        printf("3---파일 닫기    4---파일 저장\n");
        printf("하나를 선택하시오 : ");
        scanf("%d", &i);
    } while (i < 0 || i > 4);
    printf("선택된 메뉴 = %d\n", i);
}