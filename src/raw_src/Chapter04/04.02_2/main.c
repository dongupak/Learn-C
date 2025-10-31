#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void) {
    int score;

    printf("시험 점수를 입력하시오: ");
    scanf("%d", &score);

    if (score >= 90) {  // 수행할 문장이 2개 이상일 경우 중괄호 블록이 필요함함
        printf("합격입니다.\n");
        printf("장학금도 받을 수 있습니다.\n");
    }
}