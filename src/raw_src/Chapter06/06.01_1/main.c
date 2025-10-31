#include <stdio.h>

int sum(int x, int y) { // 함수 정의
    int result = x + y;
    return result;
}

int main(void) {
    int t1, t2;
    t1 = sum(10, 20);     // 함수 호출
    printf("10 + 20 = %d\n", t1);
    t2 = sum(100, 200);   // 함수 호출
    printf("100 + 200 = %d\n", t2);
}