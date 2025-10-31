#include <stdio.h>

// typedef로 구조체 정의와 포인터 선언
typedef struct {
    char name[50];
    int age;
    float grade;
} student;
typedef student* student_ptr;  // 구조체 포인터에 별칭 정의

int main() {
    student student1 = { "Tom", 22, 91.5 };
    student_ptr ptr = &student1;  // 구조체 포인터 사용

    printf("이름: %s\n", ptr->name);  // 포인터를 사용해 구조체 멤버 접근
    printf("나이: %d\n", ptr->age);
    printf("성적: %.1f\n", ptr->grade);
}