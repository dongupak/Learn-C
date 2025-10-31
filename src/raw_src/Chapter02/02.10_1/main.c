#include <stdio.h>
#include <limits.h>   // SHRT_MAX, USHRT_MAX 등의 값이 정의되어 있다

int main(void) {
    short s_num = SHRT_MAX;    // short 형 정수 값 중 최대값
    unsigned short u_num = USHRT_MAX;    // unsigned short 형 정수 값 중 최대값

    s_num = s_num + 1;
    printf("s_num = %d\n", s_num);
    u_num = u_num + 1;
    printf("u_num = %d\n", u_num);
}