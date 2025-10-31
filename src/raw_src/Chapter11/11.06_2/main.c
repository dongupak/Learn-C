#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
    char name[20];
    int score;
} student;

int compare_score(const void* a, const void* b) {
    return ((student*)b)->score - ((student*)a)->score; // 내림차순
}
int compare_name(const void* a, const void* b) {
    return strcmp(((student*)a)->name, ((student*)b)->name); // 내림차순
}
int main() {
    student s[] = {
        {"Kim", 80}, {"Lee", 90}, {"Park", 70}, {"Shin", 67}, {"Choi", 92}
    };

    qsort(s, 5, sizeof(student), compare_score);
    printf("==== sort by score ====\n");
    for (int i = 0; i < 5; i++)
        printf("%s: %d\n", s[i].name, s[i].score);


    printf("\n==== sort by name ====\n");
    qsort(s, 5, sizeof(student), compare_name);
    for (int i = 0; i < 5; i++)
        printf("%s: %d\n", s[i].name, s[i].score);
}