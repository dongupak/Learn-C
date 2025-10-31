#include <stdio.h>

int main(void)
{
    int meter, mile2meter = 1609;

    for (int i = 1; i <= 4; i++) {  // i가 1부터 4까지 반복됨
        meter = i * mile2meter;
        printf("%d 마일은 %d 미터입니다\n", i, meter);
    }
}