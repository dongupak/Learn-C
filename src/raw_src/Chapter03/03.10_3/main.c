#include <stdio.h>

int main() {
    int flags = 0;       // 0000 0000 (2진수)
    // 네 번째 비트 켜기
    flags |= (1 << 3);   // 0000 1000
    printf("네 번째 비트 켜기: %d\n", flags);
}