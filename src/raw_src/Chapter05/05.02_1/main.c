#include <stdio.h>

int main(void) {
    int i;

    for (i = 0; i <= 10; i += 2) // 증감문에서 값을 2씩 증가시킨다
        printf("%d ", i);
}