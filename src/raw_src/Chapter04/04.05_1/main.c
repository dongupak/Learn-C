#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    int num;
    printf("정수를 입력하시오: ");
    scanf("%d", &num);  // 사용자의 입력을 받아서 정수값으로 변환함

    if (num > 0)      // 이 조건을 만족하면 두번째 else-if 문의 조건을 검사하지 않음 
        printf("양수입니다.");
    else if (num == 0)      // 첫 번째 조건을 만족하지 못할 경우 조건 검사를 수행함
        printf("0입니다.");
    else                      // 위의 두 조건을 모두 만족시키지 못한 경우 수행되는 문장
        printf("음수입니다.");
}