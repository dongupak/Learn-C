#include <stdio.h>

int main(void) {
    int arr[2][3] = { {10, 20, 30}, {40, 50, 60} };
    printf("arr+0  = %ld\n", (long)arr);      // 배열의 시작 주소
    printf("arr+1  = %ld\n", (long)(arr + 1));// 배열의 시작 주소+1은 2행의 시작 주소
    printf("arr[0] = %ld\n", (long)&arr[0]);   // 1행의 시작주소
    printf("arr[1] = %ld\n", (long)&arr[1]);   // 2행의 시작주소
    printf("&arr[0][0] = %ld\n", (long)&arr[0][0]); // 1행의 1열의 주소
    printf("&arr[0][1] = %ld\n", (long)&arr[0][1]); // 1행의 2열의 주소
    printf("&arr[0][2] = %ld\n", (long)&arr[0][2]); // 1행의 3열의 주소
    printf("&arr[1][0] = %ld\n", (long)&arr[1][0]); // 2행의 1열의 주소
    printf("&arr[1][1] = %ld\n", (long)&arr[1][1]); // 2행의 2열의 주소
    printf("&arr[1][2] = %ld\n", (long)&arr[1][2]); // 2행의 3열의 주소
}