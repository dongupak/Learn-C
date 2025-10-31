#include <stdio.h>

int add(int x, int y) {
    return x + y;
}
int sub(int x, int y) {
    return x - y;
}

int main(void) {
    int result;
    int n1 = 100, n2 = 300;
    int (*pf) (int, int); // 함수 포인터 정의

    pf = add;
    result = pf(n1, n2); // (*pf)(100,300) : add(100,300)
    printf("%d + %d = %d\n", n1, n2, result);
    pf = sub;
    result = pf(n1, n2); // (*pf)(100,300) : sub(100,300)
    printf("%d - %d = %d\n", n1, n2, result);
}