#include <stdio.h>

int inc(int x) {
    return x + 1;
}
int main(void) {
    printf("inc() 함수의 주소: %p", inc);
}