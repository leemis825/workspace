#include <stdio.h>

int main(){
    // �� ���� �Է¹ް� ũ�⸦ ���ϴ� ���α׷�

    int num1, num2;
    printf("ù��° ��: ");
    scanf("%d", &num1);
    printf("�ι�° ��: ");
    scanf("%d",&num2);

    if(num1> num2){
        printf("%d �� ũ��", num1);
    }
    else if(num1< num2){
        printf("%d �� �۴�", num1);
    }
    else if(num1 == num2){
        printf("%d�� %d�� ����", num1,num2);
    }

}