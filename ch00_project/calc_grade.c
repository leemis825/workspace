// ���� ����
//  - 3������ ����(0~100) �Է�
//  - �迭�� ����
//  - ������ ��� ���
//  - ���
#include <stdio.h>

int main(){
    char name[20];  // �̸�
    int score[3];  // 3���� ����(�迭)
    int total=0;    // ����
    double avg;  // ���

    // 1. �Էº�
    printf(">>�̸�: ");
    scanf("%s",name);

    for(int i=0; i<3;i++){  // i: 0~2(�迭 �ε���)
        printf("����: ");
        scanf("%d",&score[i]);  // ������ �Է� �޾� �迭�� ����
    }

    // 2. ����
    for(int i=0; i<3; i++){
        total += score[i];
    }

    avg = total/3.0;

    // 3. ��º�
    printf("%s���� ������ %d, ����� %.2lf�Դϴ�.",name,total,avg);


}