#include <stdio.h>

#define ROWS    3
#define COLS    3

double get_avg(int m[][COLS]) {
    int* p, * endp;
    double sum = 0.0, avg;

    p = &m[0][0];              // 첫 행렬 원소의 주소
    endp = &m[ROWS - 1][COLS - 1]; // 마지막 행렬 원소의 주소
    while (p <= endp)          // p가 endp보다 작거나 같으면
        sum += *p++;           //sum에 p값 누적
    avg = sum / (ROWS * COLS); // 평균 계산
    return avg;
}

int main(void) {
    int m[ROWS][COLS] = {
    {10, 20, 30},
    {40, 50, 60},
    {70, 80, 90} };

    printf("행렬 전체 원소의 평균은 %4.1f 입니다\n", get_avg(m));
}