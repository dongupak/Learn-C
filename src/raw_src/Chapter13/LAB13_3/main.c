#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

struct numbs {
    short d1;
    short d2;
    short d3;
    short d4;
    short d5;
};

int main() {
    struct numbs s1, s2;

    // s1의 멤버에 값 할당 (10 ~ 50)
    s1.d1 = 10;
    s1.d2 = 20;
    s1.d3 = 30;
    s1.d4 = 40;
    s1.d5 = 50;

    // s2의 멤버에 값 할당 (1000 ~ 5000)
    s2.d1 = 1000;
    s2.d2 = 2000;
    s2.d3 = 3000;
    s2.d4 = 4000;
    s2.d5 = 5000;

    // 이진 파일로 저장
    FILE* fp = fopen("nums.bin", "wb");
    if (fp == NULL) {
        perror("파일 열기 실패");
        return 1;
    }

    // 구조체를 파일에 이진 형식으로 저장
    fwrite(&s1, sizeof(struct numbs), 1, fp);
    fwrite(&s2, sizeof(struct numbs), 1, fp);

    fclose(fp);

    printf("nums.bin 파일이 성공적으로 생성되었습니다.\n");
    return 0;
}