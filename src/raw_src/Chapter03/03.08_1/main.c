#include <stdio.h>

int main() {
    int num = 4;  // 10진수 4 (2진수로 0000 0100)

    // 왼쪽 시프트
    int left_shift_1 = num << 1;  // 1비트 왼쪽 시프트
    int left_shift_2 = num << 2;  // 2비트 왼쪽 시프트
    // 오른쪽 시프트
    int right_shift_1 = num >> 1; // 1비트 오른쪽 시프트
    int right_shift_2 = num >> 2; // 2비트 오른쪽 시프트

    printf("원래 값 (10진수): %d\n", num);
    printf("1비트 왼쪽 시프트: %d\n", left_shift_1);
    printf("2비트 왼쪽 시프트: %d\n", left_shift_2);
    printf("1비트 오른쪽 시프트: %d\n", right_shift_1);
    printf("2비트 오른쪽 시프트: %d\n", right_shift_2);
}