#include <stdio.h>

// �迭 ���� ���
//  - C���� sizeof() ���

// �� C��� �̿� ��ü������(JAVA, PYTHON, ���)
//    - �迭�� ��ü�� ǥ��
//    - �⺻������ �迭�̸�.length �� �迭 ����
//    -           len(�迭�̸�)   �� �迭 ����
int main(){
    int score[5];
    //sizeof(score)    �� 20 Byte
    //sizeof(score[0]) �� 4 Byte

    int count = sizeof(score)/ sizeof(score[0]);
    printf("�迭����: %d",count);

    for(int i=0; i< count; i++){
        // 
    }
}