#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int* a;

    if ((a = (int*)calloc(5, sizeof(int))) == NULL) {  // 동적으로 메모리를 할당
        printf("메모리 할당 에러 \n");
        return -1;
    }
    // calloc() 함수로 할당된 메모리 영역의 값은 모두 0임
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %2d, *(a+%d) = %2d \n", i, a[i], i, *(a + i));

    *(a + 0) = 20;  // 동적으로 할당된 메모리에 값을 부여함
    *(a + 1) = 30;
    printf("-----------------------------------------\n");
    for (int i = 0; i < 5; i++)
        printf("a[%d] = %2d, *(a+%d) = %2d \n", i, a[i], i, *(a + i));
    free(a);  // 할당된 메모리를 해제
}