#include <stdio.h>

int sum(int x, int y) { // 함수 정의
    int result = x + y;
    return result;      // 함수 수행 후 결과 result를 반환
}

int main(void) {
    int res;
    res = sum(10, 20);     // 함수 호출 후 반환값을 res에 저장
    printf("10 + 20 = %d\n", res); // 함수의 반환값 출력
}