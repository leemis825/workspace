#include <stdio.h>

struct profile
{
    int age;
    double height;
};


struct student
{
    struct profile pf;
    int id;
    double grade;
};

// �� student ����ü ���� ��� ������ profile ����ü ����

int main(){
    struct student s1;

    s1.pf.age = 37;
    s1.pf.height = 183.2;
    s1.id = 100;
    s1.grade = 4.2;

    printf("����: %d\n",s1.pf.age);
    printf("����: %.1lf\n",s1.pf.height);
    printf("�й�: %d\n",s1.id);
    printf("����: %.1lf\n",s1.grade);

}