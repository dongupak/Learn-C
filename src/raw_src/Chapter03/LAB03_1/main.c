#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main() {
    float height_cm, weight, bmi;

    // 사용자 입력
    printf("당신의 키는 얼마입니까(단위 cm)? ");
    scanf("%f", &height_cm);

    printf("당신의 몸무게는 얼마입니까(단위 kg)? ");
    scanf("%f", &weight);

    // BMI 계산
    float height_m = height_cm / 100.0; // cm를 m로 변환
    bmi = weight / (height_m * height_m);

    // 결과 출력
    printf("당신의 체질량 지수 : %.2f\n", bmi);
}