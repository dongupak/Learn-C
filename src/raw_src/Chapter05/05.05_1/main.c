#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int num;

    do {
        printf("정수를 입력하세요 (-1을 입력하면 종료): ");
        scanf("%d", &num);

        if (num != -1) {
            printf("입력한 값은 %d입니다.\n", num);
        }
    } while (num != -1);  // -1이 입력되면 반복 종료
}