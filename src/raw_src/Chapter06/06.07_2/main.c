#include <stdio.h>

void func() {
    int x = 10;  // func()의 지역 변수 x, 이 함수 내에서만 유효함
    printf("in func : x = %d\n", x);
}
int main() {
    func();
    // x = 10 // 오류 : 유효 범위를 벗어났기 때문에 사용할 수 없음
}