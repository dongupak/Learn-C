#include <stdio.h>

int main() {
    int num, is_prime;

    printf("2부터 100까지의 소수:\n");

    // 2부터 100까지 반복
    for (num = 2; num <= 100; num++) {
        is_prime = 1; // 소수 여부를 나타내는 플래그 (1: 소수, 0: 소수 아님)

        // 2부터 num의 제곱근까지 나눠서 소수 여부 확인
        for (int i = 2; i * i <= num; i++) {
            if (num % i == 0) { // 나누어 떨어지면 소수가 아님
                is_prime = 0;
                break;
            }
        }

        // 소수일 경우 출력
        if (is_prime)
            printf("%d ", num);
    }
    printf("\n");
}