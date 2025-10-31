#include <stdio.h>
// 함수 정의
int add(int x, int y) {
    int result = x + y;
    return result;
}
int main(void) {
    int total;
    total = add(3, 8);
    printf("total = %d\n", total);
    return 0;
}