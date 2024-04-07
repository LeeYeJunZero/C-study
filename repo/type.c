#include <stdio.h>

// 함수 선언
void calculate(char buffer[]);

int main() {
    char buffer[9];

    // 수 1 입력
    printf("수 1 입력: ");
    scanf_s("%hd", (short*)(buffer + 0));

    // 수 2 입력
    printf("수 2 입력: ");
    scanf_s("%hd", (short*)(buffer + 2));

    // 연산자 입력
    printf("연산자 입력: ");
    scanf_s(" %c", &buffer[8]);

    // 계산 함수 호출
    calculate(buffer);

    return 0;
}

// 계산 함수 정의
void calculate(char buffer[]) {
    if (buffer[8] == '-') {
        // 두번째 수에 음수를 곱해줌
        *(short*)(buffer + 2) *= -1;
    }

    // 결과 출력
    printf("%hd %c %hd = %f\n", *(short*)/*형변환*/(buffer + 0), buffer[8], *(short*)(buffer + 2)/*buffer 2번을 역참조 하기 위해 short형으로 형변환*/, (float)(*(short*)(buffer + 0) + *(short*)(buffer + 2)));
}
