#include <stdio.h>

int main() {
    float num1 = 3.14f;
    double num2 = 3.14159265358979;
    long double num3 = 2.718281828L;

    printf("num1: %.2f\n", num1);
    printf("num2: %.15f\n", num2);
    printf("num3: %.15Lf\n", num3);
}