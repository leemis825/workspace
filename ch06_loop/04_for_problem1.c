#include <stdio.h>

// 1~100���� ���ϱ� 
int main(){
    int total=0;  // ��������� ������ ���� 

    for(int i=1; i<=100; i++){
        total+=i;  // total = total +i;


        // �������� 30���� ũ�� �ݺ� �ߴ�!
        if(total >30){
            break;
        }
    }
    printf("1~100���� ���� %d", total);

}