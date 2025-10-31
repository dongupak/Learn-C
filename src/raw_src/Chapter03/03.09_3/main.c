#include<stdio.h>

void main() {
    int i_num;
    float f_num = 220.53;
    // 명시적인 형변환
    i_num = (int)f_num;     // float 형 자료값이 int 형으로 변환됨
    printf("%d\n", i_num);
    f_num = (float)i_num;     // int 형 자료값이 float 형으로 변환됨
    printf("%f\n", f_num);
}