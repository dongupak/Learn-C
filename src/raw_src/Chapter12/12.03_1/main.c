#include <stdio.h>

int main(void) {
    int a[5] = { 20, 30, 40 };

    // a와 &a[0] 값을 확인하는 문장
    printf("a = %p,  &a[0] = %p\n", a, &a[0]);
    // a[0],a[1],a[2],a[3],a[4]와 *(a+0),*(a+1),*(a+2),*(a+3),*(a+4)
    // 값을 출력함
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %2d, *(a+%d) = %2d \n", i, a[i], i, *(a + i));
}