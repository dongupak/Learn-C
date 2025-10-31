#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int month;

    // 사용자에게 월을 입력받기
    printf("월을 입력하세요 (1에서 12 사이): ");
    scanf("%d", &month);

    // switch-case 문을 사용하여 월에 따른 일수 출력
    switch (month) {
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:
        printf("%d월은 31일입니다.\n", month);
        break;
    case 4: case 6: case 9: case 11:
        printf("%d월은 30일입니다.\n", month);
        break;
    case 2:
        printf("2월은 28일입니다.\n");
        break;
    default:
        printf("잘못된 입력입니다. 1에서 12 사이의 숫자를 입력하세요.\n");
        break;
    }
}