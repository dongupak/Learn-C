#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main() {
    int gender; // 성별 입력 (여성: 1, 남성: 0)
    double height, waist, rfm; // 키, 허리 둘레, RFM 값

    // 사용자 입력을 받아들이자
    printf("여성이면 1, 남성이면 0을 입력하세요: ");
    scanf("%d", &gender);
    if (gender != 1 && gender != 0) {
        printf("잘못된 성별 입력입니다. 프로그램을 종료합니다.\n");
        return -1;
    }
    printf("당신의 키는 얼마입니까? ");
    scanf("%lf", &height);

    printf("당신의 허리 둘레는 얼마입니까? ");
    scanf("%lf", &waist);

    // RFM 계산
    if (gender == 1)  // 여성
        rfm = 76 - (20 * (height / waist));
    else // 남성
        rfm = 64 - (20 * (height / waist));

    // 결과 출력
    printf("당신의 RFM은 %8.3lf 입니다.\n", rfm);
    return 1;
}