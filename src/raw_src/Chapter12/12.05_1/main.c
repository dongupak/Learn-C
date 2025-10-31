#include <stdio.h>
#include <stdlib.h>

// 이중 포인터를 사용하여 포인터를 수정
void alloc_mem(int** ptr) { //포인터 변수 p의 주소를 저장하는 이중 포인터 ptr
    *ptr = (int*)malloc(sizeof(int)); // 동적 메모리를 할당, *ptr이 이 공간을 참조함
    if (*ptr != NULL)
        **ptr = 100;    // 이중 포인터를 사용하여 할당된 메모리에 값 저장
}

int main() {
    int* p = NULL;

    alloc_mem(&p);   // 포인터 변수 p의 주소를 전달
    if (p != NULL) {
        printf("동적 메모리에 저장된 값: %d\n", *p);
        free(p); // 메모리 해제
    }
    else
        printf("메모리 할당 실패\n");
}