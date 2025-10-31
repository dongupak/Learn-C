#include <stdio.h>
#include <stdbool.h>

int main(int argc, const char* argv[]) {
    bool is_good = true;

    printf("is_good = %d\n", is_good);
    if (is_good)   // is_gool이 true일 경우에 아래 문장이 실행됨
        printf("좋은 아침입니다!\n");
}