#include <stdio.h>
#include <string.h>

// BMI ����
// 1. �Էº�(����, ������)
// 2. �����(BMI ���)
// 3. ��º�(BMI ��� ���)

// BMI���� ����
// - ������(kg) / ����(m) x ����(m)
// BMI ����
// 1. 18.5 �̸� : ��ü��
// 2. 18.5 ~23 �̸�: ����
// 3. 23~ 26 �̸�: ��ü��
// 4. 26~30 �̸� : ��
// 5. 30 �̻�: ����
int main()
{

    // 1. �Էº�(����, ü��)
    int height; // ����
    int weight; // ü��
    printf("����(cm): ");
    scanf("%d", &height);

    printf("������(kg): ");
    scanf("%d", &weight);

    // ������ ��ó��
    double height_m = (double)height / 100;

    // 2. �����
    // 2-1. BMI ���� ���
    double bmiValue = weight / (height_m * height_m);

    // 2-2. BMI ��� å��
    char bmiClass[20];
    if (bmiValue <18.5){
        strcpy(bmiClass, "��ü��"); 
    }
    else if (bmiValue <23){
        strcpy(bmiClass, "����"); 
    }
    else if (bmiValue <26){
        strcpy(bmiClass, "��ü��"); 
    }
    else if (bmiValue <30){
        strcpy(bmiClass, "��"); 
    }
    else{
        strcpy(bmiClass,"����");
    }

    // 3. ��º�
    printf("���� %dcm�� ü�� %dkg�� ����� BMI������ %.2lf�̰� �� ����� %s�̴�.",height,weight,bmiValue,bmiClass);
}