#include <stdio.h>

int main(void) {
    int i;

    for (i = 1; i <= 10; i++) {
        if (i % 2 == 0)
            continue;  //아래 코드를 건너뛰고 다음 루프로 이동
        printf("%d ", i);
    }
}