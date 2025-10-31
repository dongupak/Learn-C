#include <stdio.h>
#define _USE_MATH_DEFINES
#include <math.h>

double logbase(double a, double base)
{
    return log(a) / log(base);
}
int main(void) {
    printf("3^2: %.2f\n", pow(3.0, 2.0));
    printf("log_{3}^{9}: %.2f\n", logbase(9.0, 3.0));
    printf("e^2: %.2f\n", exp(2));       // e^2 계산
    printf("ln(e): %.2f\n", log(M_E));   // 자연로그
    printf("log10(1000): %.2f\n", log10(1000)); // 밑 10 로그
}