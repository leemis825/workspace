#include <stdio.h>

struct vision
{                // ����ü ���� �� ����
    double left;
    double right;
};

struct vision exchange(struct vision robot);  // �Լ� ����
struct vision exchange(struct vision robot){  // �Լ� ����
    double temp;
    temp = robot.left;
    robot.left = robot.right;
    robot.right = temp;
    return robot;
}
int main(){
    struct vision robot;
    printf("�÷�: ");
    scanf("%lf%lf", &(robot.left),&(robot.right));

    robot = exchange(robot);
    printf("���� �� �÷�: %.1lf %.1lf", robot.left, robot.right);
}