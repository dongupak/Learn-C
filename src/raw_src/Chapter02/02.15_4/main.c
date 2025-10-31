#define _CRT_SECURE_NO_WARNINGS    // 비주얼 스튜디오에서 경고 메시지를 보고 싶지 않을 경우
#include <stdio.h>
int main() {
    int num; float real;
    scanf("%d %f", &num, &real);  // scanf_s() 불필요
    printf("num = %d, real = %f\n", num, real);
}