#include <stdio.h>

void print_address(char* name) {
    printf("세종 특별 자치시 고운동\n");
    printf("고운 1길, 파이썬 빌딩 7층\n");
    printf("수신 : %s\n", name);
}

int main()
{
    print_address("홍길동");     // "홍길동" 대신 다른 이름을 넣을 수 있다
    print_address("박동규");
}