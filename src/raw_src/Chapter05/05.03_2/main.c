#include <stdio.h>

int main() {
    int arr[] = { 10, 20, 30, 40, 50 };

    for (int i = 0; i < 5; i++)   // 루프 제어 변수 i는 루프 내에서만 사용가능하다
        printf("arr[%d] = %d\n", i, arr[i]);

    printf("i = %d\n", i);       // 오류 발생: i는 선언문 밖에서 사용할 수 없음
}