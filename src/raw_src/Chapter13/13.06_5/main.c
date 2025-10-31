#include <stdio.h>

int main(void) {
    puts("이것은 표준 출력입니다.");
    // 위의 결과와 동일한 결과
    fputs("이것은 표준 출력입니다.", stdout);
}