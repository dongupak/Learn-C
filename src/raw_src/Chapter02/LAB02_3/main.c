#define _CRT_SECURE_NO_WARNINGS    // 경고 메시지를 보고 싶지 않을 경우
#include <stdio.h>

int main() {
    float f1, f2, f3;
    float sum, avg;

    printf("세 수를 한 줄에 입력하시오 : ");
    scanf("%f %f %f", &f1, &f2, &f3);  // scanf_s 사용 가능
    printf("f1 : %.1f\n", f1);    // 출력
    printf("f2 : %.1f\n", f2);
    printf("f3 : %.1f\n", f3);
    sum = f1 + f2 + f3;     // 합을 계산
    avg = sum / 3.0;     // 평균을 계산
    printf("세 수의 합: %.2f\n", sum);
    printf("세 수의 평균: %.2f\n", avg);
}