#include <stdio.h>

int add(int x, int y) {
    return x + y;
}


int sub(int x, int y) {
    return x - y;
}


void exec(int (*pf)(int, int), int n1, int n2)
{
    printf("수행 결과: %d\n", pf(n1, n2));
}

int main() {
    exec(add, 100, 300);
    exec(sub, 100, 300);
}