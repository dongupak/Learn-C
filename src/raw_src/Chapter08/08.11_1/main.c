// prog.c라는 파일명으로 prog라는 실행가능한 프로그램을 만들어보자
#include <stdio.h>

int main(int argc, char* argv[]) {
    printf("인자의 개수: %d\n", argc);

    for (int i = 0; i < argc; i++)
        printf("argv[%d]: %s\n", i, argv[i]);
}