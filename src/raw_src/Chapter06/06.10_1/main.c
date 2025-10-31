#include <stdio.h>

// 두 변수 a, b의 내용(값)을 교환하는 함수
void swap(int a, int b) {   // 피호출 함수(main()에 의해 호출되는 함수)
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main(void) {       // 호출 함수(swap()을 호출하는 함수)
    int x = 100, y = 200;

    printf("x = %d, y = %d\n", x, y);
    swap(x, y);  // 두 변수 x, y의 내용(값)을 함수에 복사하여 전달함
    printf("swap() 이후\n");
    printf("x = %d, y = %d\n", x, y);
}