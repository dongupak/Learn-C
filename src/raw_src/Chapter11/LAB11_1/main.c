#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

// 구조체 정의
struct vehicle {
    char name[50];      // 모델 이름
    char company[50];   // 생산 업체
    int prod_year;      // 생산 연도
    int price;          // 출고 가격
};

int main() {
    // 구조체 배열 선언
    struct vehicle v[3];

    // 자동차 1 정보 저장
    strcpy(v[0].name, "IONIQ 5");
    strcpy(v[0].company, "Hyundai Motor Company");
    v[0].prod_year = 2022;
    v[0].price = 3120;

    // 자동차 2 정보 저장
    strcpy(v[1].name, "X3");
    strcpy(v[1].company, "BMW");
    v[1].prod_year = 2021;
    v[1].price = 6500;

    // 자동차 3 정보 저장
    strcpy(v[2].name, "E250");
    strcpy(v[2].company, "Mercedes Benz");
    v[2].prod_year = 2025;
    v[2].price = 7450;

    // 자동차 정보 출력
    for (int i = 0; i < 3; i++) {
        printf("자동차 %d\n", i + 1);
        printf("모델 이름: %s\n", v[i].name);
        printf("생산 업체: %s\n", v[i].company);
        printf("생산 연도: %d년\n", v[i].prod_year);
        printf("출고 가격: %d만원\n", v[i].price);
        printf("\n");
    }
}