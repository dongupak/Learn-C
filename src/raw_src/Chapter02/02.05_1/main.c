#include <stdio.h>

int main() {
    // 10진수 리터럴
    int decimal = 338;  // 10진수
    printf("10진수: %d\n", decimal);

    // 8진수 리터럴
    int octal = 033;    // 8진수 (앞에 0으로 시작)
    printf("8진수 (10진수로 출력): %d\n", octal);
    printf("8진수 (8진수로 출력): %o\n", octal);

    // 16진수 리터럴
    int hex = 0x1F;     // 16진수 (앞에 0x로 시작)
    printf("16진수 (10진수로 출력): %d\n", hex);
    printf("16진수 (16진수로 출력): %X\n", hex);

    // 2진수 리터럴
    int binary = 0b1100;  // 2진수 (앞에 0b로 시작, GCC 확장 버전에 있음)
    printf("2진수 (10진수로 출력): %d\n", binary);
}