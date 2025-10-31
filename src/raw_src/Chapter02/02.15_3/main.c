#include <stdio.h>
int main() {
    int num; float real;
    scanf_s("%d %f", &num, &real);  // 크기 매개변수 불필요
    printf("num = %d, real = %f\n", num, real);
}
