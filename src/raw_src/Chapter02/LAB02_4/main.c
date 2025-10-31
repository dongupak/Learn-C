#include <stdio.h>

int main() {
    int height = 10;  // 높이
    int base = 20;    // 밑변의 길이
    float rect_area, triangle_area;

    // 면적 계산
    rect_area = base * height;
    triangle_area = (base * height) / 2.0;

    // 출력
    printf("밑변의 길이가 %d이고 높이가 %d인 삼각형의 면적 : %.2f\n", \
        base, height, triangle_area);
    printf("밑변의 길이가 %d이고 높이가 %d인 사각형의 면적 : %.2f\n", \
        base, height, rect_area);
}