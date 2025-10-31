#include <stdio.h>

int main(void) {
    char name[50];

    printf("이름을 입력하세요: ");
    fgets(name, sizeof(name), stdin);  // 50바이트 이하로 입력 받음

    printf("입력된 이름: %s", name);  // 개행 문자 포함됨
    return 0;
}