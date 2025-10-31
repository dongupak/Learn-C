#include <stdio.h>
int main(void) {
    fprintf(stdout, "Hello, World!\n");
    fprintf(stdout, "정수: %d, 실수: %.2f, 문자: %c\n", 42, 3.14, 'A');
}