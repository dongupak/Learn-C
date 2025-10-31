#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define STUDENT_COUNT 3  // 학생 수 정의

// 학생 정보를 저장하는 구조체 정의
struct student {
    char name[50];
    int id;
    float score;
};

// 최고 점수를 가진 학생 찾기 함수
struct student find_highest(struct student students[], int size) {
    struct student top = students[0];  // 첫 번째 학생을 최고 점수로 가정

    for (int i = 1; i < size; i++) {
        if (students[i].score > top.score) {
            top = students[i];  // 더 높은 점수를 가진 학생 업데이트
        }
    }
    return top;
}

int main() {
    struct student students[STUDENT_COUNT];  // 구조체 배열 선언

    // 학생 정보 입력
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("학생 %d의 이름을 입력하세요: ", i + 1);
        scanf(" %[^\n]", students[i].name); // 공백 포함 문자열 입력
        printf("학생 %d의 학번을 입력하세요: ", i + 1);
        scanf("%d", &students[i].id);
        printf("학생 %d의 성적을 입력하세요: ", i + 1);
        scanf("%f", &students[i].score);
    }

    // 학생 정보 출력
    printf("\n===== 학생 정보 =====\n");
    for (int i = 0; i < STUDENT_COUNT; i++) {
        printf("이름: %s, 학번: %d, 성적: %.2f\n", students[i].name, \
            students[i].id, students[i].score);
    }

    // 최고 성적 학생 찾기
    struct student highest = find_highest(students, STUDENT_COUNT);
    printf("\n===== 최고 성적 학생 =====\n");
    printf("이름: %s, 학번: %d, 성적: %.2f\n", highest.name, highest.id, \
        highest.score);

    return 0;
}