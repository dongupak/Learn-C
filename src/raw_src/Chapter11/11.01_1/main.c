#include <stdio.h>

struct patient {
    int id;        // 환자번호, 정수형
    char name[10]; // 이름, 문자열
    float weight;  // 몸무게, 실수형
    float height;  // 키, 실수형
};
int main(void) {
    struct patient p1 = { 20260001, "Kim", 74.3, 176.5 }; // 초기화

    printf("환자 번호: %d\n", p1.id); // 구조체 변수 p1의 id 멤버(내부 변수)에 접근
    printf("이름: %s\n", p1.name);
    printf("몸무게: %.2f kg\n", p1.weight);
    printf("키: %.2f cm\n", p1.height);
}