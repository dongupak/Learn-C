#include <stdio.h>

void func(int* i)
{
    (*i)++;
}

int main()
{
    int a = 10;
    int* b = &a;

    printf("a = %d\n", a);
    func(b); // 포인터 변수 b를 피호출 함수에 넘겨준다
    printf("func(b) 이후\n");
    printf("a = %d\n", a);
}