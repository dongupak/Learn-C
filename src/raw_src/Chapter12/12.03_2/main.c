#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;

    if ((a = (int*)malloc(5 * sizeof(int))) == NULL) {  // 동적으로 메모리를 할당
        printf("메모리 할당 에러 \n");
        return -1;
    }
    *(a + 0) = 20;  // 동적으로 할당된 메모리에 값을 부여함
    *(a + 1) = 30;
    *(a + 2) = 40;
    *(a + 3) = 0;
    *(a + 4) = 0;

    for (int i = 0; i < 5; i++)
        printf("a[%d] = %2d, *(a+%d) = %2d \n", i, a[i], i, *(a + i));
    free(a);  // 할당된 메모리를 해제
}