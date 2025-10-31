#include <stdio.h>

// typedef를 사용한 구조체 정의
typedef struct {
    char name[50];   // 학생 이름
    int age;         // 학생 나이
    float grade;     // 학생 성적
} student;

int main() {
    // struct 키워드 없이 student 타입으로 변수 선언
    student student1 = { "Tom", 22, 91.5 };

    // 구조체 멤버 출력
    printf("이름: %s\n", student1.name);
    printf("나이: %d\n", student1.age);
    printf("성적: %.1f\n", student1.grade);
}