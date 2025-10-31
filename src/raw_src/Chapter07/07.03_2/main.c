#include <stdio.h> 

int main(void)
{
    int m[3] = { 10, 20, 30 }, n[3], i;

    // m의 배열 원소 m[0],m[1],m[2]를 n에 할당
    for (i = 0; i < 3; i++)
        n[i] = m[i];

    printf("원본 배열 m : ");
    for (i = 0; i < 3; i++)
        printf("%d ", m[i]);
    printf("\n사본 배열 n : ");
    for (i = 0; i < 3; i++)
        printf("%d ", n[i]);
}