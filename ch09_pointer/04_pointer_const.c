/**
 * const(���)
 * �����Ϳ��� const�� �ǹ̴�?
 *   - �����ͺ����� ����Ű�� ������ �������������ڷ� ��ȯ�Ұ�!
 *   - ������ ������ read-only ����ϰ� ���� ��
 */

#include <stdio.h>

int main(){
    int a =10, b=20;
    const int *pa = &a;  // pa �� a

    printf("���� a ���: %d\n",*pa);

    pa = &b;            // pa �� b
    printf("���� b ���: %d\n",*pa);

    pa = &a;            // pa �� a
    a=80;

    // const ������ ������ ���� ���� �����ڷ� �� ���� �Ұ�
    // *pa =99; (X)
    printf("���� a ���: %d\n",*pa);

}