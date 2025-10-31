#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>
// 일반각을 라디안으로 변환
#define degToRad(angleInDegrees) ((angleInDegrees) * M_PI / 180.0) 
// 라디안을 일반각으로 변환
#define radToDeg(angleInRadians) ((angleInRadians) * 180.0 / M_PI)

int main(void) {
    double angle = degToRad(45); // 일반각 45도를 라디안으로

    printf("sin(45도): %.2f\n", sin(angle));
    printf("cos(45도): %.2f\n", cos(angle));
    printf("tan(45도): %.2f\n", tan(angle));
}
