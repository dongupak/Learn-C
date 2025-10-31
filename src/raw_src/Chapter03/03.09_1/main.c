#include <stdio.h>

int main() {
    int num = 10;
    char ch = 'A';
    float f = 3.14f;
    double d = 3.1415;
    int arr[10];    // 여러 개의 원소를 가질 수 있는 배열 자료형
    // 변수의 크기
    printf("int 변수 num의 크기: %zu 바이트\n", sizeof(num));
    printf("char 변수 ch의 크기: %zu 바이트\n", sizeof(ch));
    printf("float 변수 f의 크기: %zu 바이트\n", sizeof(f));
    printf("double 변수 d의 크기: %zu 바이트\n", sizeof(d));
    // 데이터형의 크기
    printf("int의 크기: %zu 바이트\n", sizeof(int));
    printf("char의 크기: %zu 바이트\n", sizeof(char));
    printf("float의 크기: %zu 바이트\n", sizeof(float));
    printf("double의 크기: %zu 바이트\n", sizeof(double));
    // 배열의 크기
    printf("int 배열 arr의 전체 크기: %zu 바이트\n", sizeof(arr));
    printf("int 배열 arr의 원소 개수: %zu 개\n", sizeof(arr) / sizeof(arr[0]));
}