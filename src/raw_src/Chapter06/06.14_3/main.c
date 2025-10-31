#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    long int t = time(NULL);

    srand(t); // 난수 생성기 초기화
    printf("time(NULL) = %ld\n", t);
    printf("난수 1: %d\n", rand());
    printf("난수 2: %d\n", rand());
}