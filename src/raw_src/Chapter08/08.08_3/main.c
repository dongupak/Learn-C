#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr = (int*)malloc(sizeof(int)); // 동적 메모리 할당
    if (ptr == NULL) {  // 동적 메모리 할당에 성공하지 못한 경우
        printf("메모리 할당 실패\n");
        return 1;
    }

    *ptr = 10;
    printf("%d\n", *ptr);

    free(ptr);  // 메모리 해제
}