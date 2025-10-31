#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define BUFFER_SIZE 1024

int main() {
    FILE* fp1, * fp2;
    char buffer[BUFFER_SIZE];  // 버퍼: 한 번에 최대 1024바이트 처리
    size_t bytesRead;

    // 원본 파일 열기 (읽기 모드, 바이너리)
    fp1 = fopen("c:\\workspace\\sample.jpg", "rb");
    if (fp1 == NULL) {
        perror("원본 파일 열기 실패");
        return 1;
    }
    // 사본 파일 열기 (쓰기 모드, 바이너리)
    fp2 = fopen("c:\\workspace\\sample_copy.jpg", "wb");
    if (fp2 == NULL) {
        perror("사본 파일 열기 실패");
        fclose(fp1); // 열려 있는 파일은 닫아야 함
        return 1;
    }

    // 파일 복사: 읽어서 바로 쓰기
    while ((bytesRead = fread(buffer, 1, sizeof(buffer), fp1)) > 0)
        fwrite(buffer, 1, bytesRead, fp2);

    // 파일 닫기
    fclose(fp1);    fclose(fp2);
    printf("파일 복사가 완료되었습니다.\n");
}