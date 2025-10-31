#include <stdio.h>

// 플랫폼에 따라 크기를 정의
#ifdef _WIN32  // 32비트 컴퓨터 환경의 경우
typedef unsigned long long uint64;
#else          // 32비트 컴퓨터 환경이 아닌 경우
typedef unsigned long uint64;
#endif

int main() {
    uint64 largeNumber = 1234567890123456789ULL;
#ifdef _WIN32  // 32비트 컴퓨터 환경의 경우
    printf("큰 숫자: %llu\n", largeNumber);
#else          // 32비트 컴퓨터 환경이 아닌 경우
    printf("큰 숫자: %lu\n", largeNumber);
#endif
    return 0;
}