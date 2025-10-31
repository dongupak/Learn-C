#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct point {   // x, y좌표를 가지는 구조체
    int x;
    int y;
};
struct rect {
    struct point p1; // 구조체의 멤버로 구조체 값이 가능
    struct point p2;
};

int main(void) {
    struct rect r;
    int w, h, area, peri;

    printf("왼쪽 하단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p1.x, &r.p1.y);
    printf("오른쪽 상단의 좌표를 입력하시오: ");
    scanf("%d %d", &r.p2.x, &r.p2.y);

    w = r.p2.x - r.p1.x;  // 여러 개의 . 연산자를 사용하여 멤버 내의 멤버에 접근하자
    h = r.p2.y - r.p1.y;

    area = w * h;
    peri = 2 * w + 2 * h;
    printf("사각형의 면적은 %d이고 둘레는 %d입니다.\n", area, peri);
}