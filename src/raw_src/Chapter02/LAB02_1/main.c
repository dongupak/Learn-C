#include <stdio.h>

int main() {
    // 정수 변수 초기화
    int n1 = 34;
    int n2 = 22;
    int n3 = 40;

    // 합과 평균 저장 변수 선언
    int sum;
    float avg;

    sum = n1 + n2 + n3;
    avg = sum / 3.0;  // 실수 평균 계산

    // 출력문
    printf("n1 = %d, n2 = %d, n3 = %d\n", n1, n2, n3);
    printf("세 수의 합: %d\n", sum);
    printf("세 수의 평균: %.2f\n", avg);
}