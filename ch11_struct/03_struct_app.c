#include <stdio.h>

struct student
{
    int id;
    char name[20];
    double grade;
};


int main(){
    int num1 =10, num2 =20, num3 =30;
    struct student s1 = {315, "ȫ�浿", 2.4},
                   s2 = {316, "�̼���", 3.7}, 
                   s3 = {317, "�������", 4.4}; 
    struct student max;

    // �ڷ����� student�� ���� ������ ���� �� ����. 
    max =s1;
    if (s2.grade>max.grade){
        max = s2;
    }
    if(s3.grade>max.grade){
        max = s3;
    }

    printf("�й�(%d), �̸�(%s), ����(%.1lf)",max.id, max.name, max.grade);
    
}