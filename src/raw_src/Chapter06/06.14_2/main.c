#include <stdio.h>
#include <stdlib.h>

int main(void) {
    srand(3234);
    printf("srand(3234) 일 때의 난수 : %d\n", rand());
    srand(3234);
    printf("srand(3234) 일 때의 난수 : %d\n", rand());
    srand(100);
    printf("srand(1000) 일 때의 난수 : %d\n", rand());
}