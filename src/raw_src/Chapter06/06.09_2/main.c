#include <stdio.h>

// 외부 변수 선언 (정의는 다른 파일에 있음)
extern int shrd;
void print_value(void);

int main(void) {
    print_value();
    printf("main의 shrd = %d\n", shrd);
}