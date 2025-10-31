#include <stdio.h>

int main() {
    long var = 3000000000;
    printf("%%d 사용: %d\n", var);
    printf("%%lld 사용: %lld\n", (long)var);
    printf("%%lld 형식 출력: %lld\n", (long long)81985529205302085);
}