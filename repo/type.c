#include <stdio.h>

// �Լ� ����
void calculate(char buffer[]);

int main() {
    char buffer[9];

    // �� 1 �Է�
    printf("�� 1 �Է�: ");
    scanf_s("%hd", (short*)(buffer + 0));

    // �� 2 �Է�
    printf("�� 2 �Է�: ");
    scanf_s("%hd", (short*)(buffer + 2));

    // ������ �Է�
    printf("������ �Է�: ");
    scanf_s(" %c", &buffer[8]);

    // ��� �Լ� ȣ��
    calculate(buffer);

    return 0;
}

// ��� �Լ� ����
void calculate(char buffer[]) {
    if (buffer[8] == '-') {
        // �ι�° ���� ������ ������
        *(short*)(buffer + 2) *= -1;
    }

    // ��� ���
    printf("%hd %c %hd = %f\n", *(short*)/*����ȯ*/(buffer + 0), buffer[8], *(short*)(buffer + 2)/*buffer 2���� ������ �ϱ� ���� short������ ����ȯ*/, (float)(*(short*)(buffer + 0) + *(short*)(buffer + 2)));
}
