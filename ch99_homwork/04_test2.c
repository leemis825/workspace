// clc�� ������ �ڵ带 �ٽ� �ٿ��־ ������ ���
#include <stdio.h>

// �Լ����� FtoC, �����µ� �������� cVal ����� ��
double FtoC(double a) {
    double cVal;
    // ȭ���µ��� �����µ��� ��ȯ�ϴ� ����: (5.0 x (ȭ���µ�-32.0)) / 9.0
    cVal = (5.0 * (a - 32.0)) / 9.0;
    // ���� �� ���� �µ��� return������ ����
    return cVal;
}

int main(void) {
    double fVal;
    //����ڿ��� ������ ȭ�� �µ� ���� �Է� (�������� fVal) ex) 17.0
    printf("ȭ�� �µ� ���� �Է��Ͻÿ�. : ");
    scanf("%lf", &fVal);
    //FtoC�Լ��� ���� �Ű� ������ ȭ��
    double cVal = FtoC(fVal);

    // printf("ȭ���µ�: %.1lf, �����µ�: %.1lf\n", fVal, cVal); �� ����ؼ� ���
    printf("ȭ���µ�: %.1lf, �����µ�: %.1lf\n", fVal, cVal);
}