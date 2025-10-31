#include <stdio.h>

// 요일을 나타내는 열거형 정의
enum Day { MON, TUE, WED, THU, FRI, SAT, SUN };
typedef enum Day Day;  // Day 자료형 정의

// 열거형을 매개변수로 받아 메시지를 출력하는 함수
void printDayMessage(Day day) {
    switch (day) {
    case MON:
        printf("It's Monday. Start of the week!\n");
        break;
    case TUE:
        printf("It's Tuesday. Let's keep going!\n");
        break;
    case WED:
        printf("It's Wednesday. Halfway there!\n");
        break;
    case THU:
        printf("It's Thursday. Almost the weekend!\n");
        break;
    case FRI:
        printf("It's Friday. Time to wrap things up!\n");
        break;
    case SAT:
    case SUN:
        printf("It's the weekend. Enjoy your rest!\n");
        break;
    default:
        printf("Invalid day.\n");
    }
}

int main() {
    // 오늘 요일 설정
    Day today = FRI;

    // 메시지 출력
    printDayMessage(today);
}