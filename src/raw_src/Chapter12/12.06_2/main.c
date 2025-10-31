#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

typedef struct {
    char name[50];
    int age;
    float grade;
} student;

int main() {
    student student1;
    student* ptr = &student1;

    // (*ptr). 문법
    strcpy((*ptr).name, "Tom");
    (*ptr).age = 22;
    (*ptr).grade = 88.0;
    // 위와 동일한 동작을 -> 연산자로 수행
    strcpy(ptr->name, "Alice");
    ptr->age = 20;
    ptr->grade = 90.5;

    printf("(*ptr).name: %s, ptr->name: %s\n", (*ptr).name, ptr->name);
    printf("(*ptr).age: %d, ptr->age: %d\n", (*ptr).age, ptr->age);
    printf("(*ptr).grade: %.1f, ptr->grade: %.1f\n", (*ptr).grade, ptr->grade);
}