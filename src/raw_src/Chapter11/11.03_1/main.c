#include <stdio.h>

struct student {
    char name[50];
    int age;
    float grade;
};

int main() {
    struct student student1 = { "Tom", 22, 91.5 };
    struct student student2;

    // 구조체의 복사
    student2 = student1;
    // 복사된 값 출력
    printf("student1 이름: %s, 나이 = %d\n", student1.name, student1.age);
    printf("student2 이름: %s, 나이 = %d\n", student2.name, student2.age);
}