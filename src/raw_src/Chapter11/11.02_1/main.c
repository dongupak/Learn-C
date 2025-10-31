#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

struct patient {
    int id;        // 환자번호, 정수형
    char name[10]; // 이름, 문자열
    float weight;  // 몸무게, 실수형
    float height;  // 키, 실수형
};
int main(void) {
    struct patient p2;

    p2.id = 20260002;
    strcpy(p2.name, "홍길동"); // 문자열 초기화는 strcpy()를 사용함
    //p2.name = "홍길동"; // 이렇게 하면 안됩니다
    p2.weight = 76.9;
    p2.height = 186.2;

    printf("두 번째 환자 ---\n");
    printf("번호: %d\n", p2.id);
    printf("이름: %s\n", p2.name);
    printf("몸무게: %.2f kg\n", p2.weight);
    printf("키: %.2f cm\n", p2.height);
}