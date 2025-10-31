#include <stdio.h>

struct student {
    char name[50];
    int age;
    float grade;
};

int main() {
    // 구조체 배열 선언과 초기화
    struct student students[2] = { // 두 개의 값을 가지는 구조체 배열 
        {"Tom", 22, 91.5},
        {"Bob", 25, 85.0}
    };

    // 구조체 배열 student에 있는 학생 정보 출력
    for (int i = 0; i < 2; i++) {
        printf("학생 %d\n", i + 1);
        printf("이름: %s\n", students[i].name);
        printf("나이: %d\n", students[i].age);
        printf("성적: %.1f\n\n", students[i].grade);
    }
}