#include <stdio.h>

int main(void) {
    int x = 100; // 첫번째 정수를 저장할 변수
    int y = 200; // 두번째 정수를 저장할 변수
    int avg;     // 두 정수의 평균을 저장하는 변수

    avg = (x + y) / 2; // 두 정수의 평균을 구하는 식
    printf("x = %d, y = %d\n", x, y); // x, y 값을 화면에 출력
    printf("두 수의 평균: %d\n", avg);  // avg 값을 화면에 출력

    return 0;
}