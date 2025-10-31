#include <stdio.h>
// 함수 포인터에 typedef 사용
typedef int (*operation_func)(int, int);
// 두 정수의 합
int add(int a, int b) {
    return a + b;
}
// 두 정수의 차
int sub(int a, int b) {
    return a - b;
}
void perform_operation(operation_func op, int num_x, int num_y) {
    printf("결과: %d\n", op(num_x, num_y));
}
int main() {
    perform_operation(add, 5, 3);      // 덧셈
    perform_operation(sub, 5, 3); // 뺄셈
}