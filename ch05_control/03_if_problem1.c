#include <stdio.h>

int main(){

    //����ڷκ��� ���̸� �Է� �ް� 20�� �̻��̸� 
    //�ַ��� �Ǹ��ϴ� �ý���
/*
    int num;
    printf("���̸� �Է��Ͻÿ�. : ");
    scanf("%d", &num);
    if(num >=20){
        printf("�ַ��� �� �� �ֽ��ϴ�.");
    }
    else if(num <20){
        printf("�ַ��� �� �� �ֽ��ϴ�.");
    }
*/
    //1. ���� �Է� �ޱ� 
    int age;
    printf("����: ");
    scanf("%d", &age);
    
    //2.�ַ� ���� ���� �Ǵ�
    if (age >20){
        printf("�ַ� ���Ű� �����մϴ�.");
    }
    else{
        printf("�ַ� ���Ű� �Ұ����մϴ�.");
    }


}