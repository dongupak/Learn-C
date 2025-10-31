#include <stdio.h>
#define SIZE 5
// 출력 함수
void print_array(int arr[], int size) {
    for (int i = 0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}
void get_twice(int arr[], int size) {  // 원본 배열 원소를 두 배로 만든다
    for (int i = 0; i < size; i++)
        arr[i] *= 2;
}
int main(void) {
    int score[SIZE] = { 31, 63, 62, 87, 14 }; // 원본 배열

    printf("get_twice() 호출 이전 : ");
    print_array(score, SIZE); // 함수 호출 전 원본 배열
    get_twice(score, SIZE);   // 함수 호출
    printf("get_twice() 호출 이후 : ");
    print_array(score, SIZE); // 함수 호출 전 원본 배열
}