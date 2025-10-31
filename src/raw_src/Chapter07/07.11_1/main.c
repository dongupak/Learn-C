#include <stdio.h>

// 이진 탐색 함수
int binary_search(int arr[], int low, int high, int x)
{
    while (low <= high) {  // low 인덱스가 high 인덱스보다 작거나 같으면 반복
        int mid = low + (high - low) / 2;

        if (arr[mid] == x)      // 키 x가 mid 위치에 있는 경우
            return mid;
        else if (arr[mid] < x)  // 키 x가 mid 위치의 값보다 큰 경우 
            low = mid + 1;
        else                    // 키 x가 mid 위치의 값보다 작은 경우                       
            high = mid - 1;
    }

    return -1;  // 배열 내에 키 x가 없을 경우 -1을 반환
}

int main(void)
{
    int arr[] = { 3, 4, 5, 7, 9, 10, 20, 24, 44 };
    int key = 10;
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = binary_search(arr, 0, size - 1, key);

    if (result == -1)
        printf("키 %d가 arr 배열 원소에 없음\n", key);
    else
        printf("탐색 성공 arr[%d]에서 %d(을)를 찾았습니다\n", result, key);
    return 0;
}