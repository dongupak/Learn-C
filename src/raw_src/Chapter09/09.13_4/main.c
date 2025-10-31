#include <stdio.h>

int main() {
    int arr[3] = { 10, 20, 30 };
    void* ptr1 = arr;
    ptr1 = (char *)ptr1 + 1;
    printf("ptr1 + 1 °ª: %d\n", *(int*)ptr1);
}