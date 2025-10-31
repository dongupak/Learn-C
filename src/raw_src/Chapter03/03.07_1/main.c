#include <stdio.h>

int main() {
    int a = 9;   // 10진수 9 (2진수로 0000 1001)
    int b = 10;  // 10진수 10 (2진수로 0000 1010)
    int and_result = a & b;   // 비트 AND 연산
    int or_result = a | b;    // 비트 OR 연산
    int xor_result = a ^ b;   // 비트 XOR 연산
    int not_a = ~a;     // 비트 NOT 연산

    printf("a = %d, b = %d\n", a, b);
    printf("a & b = %d\n", and_result);
    printf("a | b = %d\n", or_result);
    printf("a ^ b = %d\n", xor_result);
    printf("~a = %d\n", not_a);
}