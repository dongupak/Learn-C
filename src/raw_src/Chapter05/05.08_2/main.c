#include <stdio.h>  // [코드 2]

int main() {
    int i = 0;
    while (1) {  // 무한 반복
        printf("i의 값: %d\n", i);
        i++;
        if (i == 5)
            break;  // i가 5이면 반복 종료
    }
}