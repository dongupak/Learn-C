#include <stdio.h>

// 요일을 나타내는 열거형 정의
enum Day { MON = 0, TUE, WED, THU, FRI, SAT, SUN };
typedef enum Day Day;  // Day 자료형 정의
int main() {
    // 오늘 요일 설정
    Day today = MON;
    printf("MON = %d, today = %d\n", MON, today);
    today = FRI;
    printf("FRI = %d, today = %d\n", FRI, today);
}