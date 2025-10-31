#include <stdio.h>

int main() {
	unsigned int num1 = 42u;
	long int num2 = 1234567890L;
	long long int num3 = 1234567890123LL;
	unsigned long int num4 = 987654321UL;

	printf("num1: %u\n", num1);
	printf("num2: %ld\n", num2);
	printf("num3: %lld\n", num3);
	printf("num4: %lu\n", num4);
}