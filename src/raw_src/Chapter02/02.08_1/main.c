#include <stdio.h>

#define print(n) printf("%d\n", n)    // printf("%d\n", n)를 print(n)으로 정의

int main()
{
    print(100);    // 100: printf("%d\n", 100)으로 대체됨
    print(200);    // 200: printf("%d\n", 200)으로 대체됨
}