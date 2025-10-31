#include <stdio.h>

#define PI 3.14159       // 매크로 상수 정의
#define CIRCLE_AREA(r) (PI * (r) * (r))  // 원의 넓이를 계산하는 함수 매크로

int main() {
    int radius = 5;
    printf("반지름이 %d인 원의 넓이: %.2f\n", radius, CIRCLE_AREA(radius));
    return 0;
}