#include <stdio.h>

int main(void) {
    int i;           // 루프 제어 변수 선언은 루프 외부에서 할 수 있음음

    for (i = 10; i > 0; i--)    // 코드 블록이 없을 경우 중괄호는 생략 가능함     
        printf("%d ", i);
}