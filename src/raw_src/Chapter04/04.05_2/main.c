#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);  // 사용자의 입력을 받아서 정수값으로 변환함

    if (num >= 0) {
        if (num == 0)  // 위의 if 문이 참일 경우 num이 0인가를 다시 검사함
            printf("0입니다.");
        else             // 위의 if 문이 참이고 num이 0이 아닌 경우
            printf("양수입니다.");
    }
    else                 // 위의 if 문이 거짓일 경우 수행되는 문장
        printf("음수입니다.");
}