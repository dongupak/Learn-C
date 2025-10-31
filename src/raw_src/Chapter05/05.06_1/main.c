#include <stdio.h>

int main() {
    int sum = 0; // 합을 저장할 변수 초기화

    // 1에서 10까지 숫자에 대하여 합을 계산
    for (int i = 1; i <= 10; i++)
        sum += i; // 현재 값을 sum에 더함

    // 결과 출력
    printf("1에서 10까지의 합: %d\n", sum);
}