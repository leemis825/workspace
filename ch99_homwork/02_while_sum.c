#include <stdio.h>

// ����: while���� ����ؼ� 1~100������ ���� Ȧ����, ¦���� ���

int main(){

    int i=1;
    int evenSum =0;
    int oddSum =0;

    while(i<=100){
        if(i%2==0){
            evenSum +=i;
        }
        else{
            oddSum +=i;
        }
        i++;
    }

    printf("¦�� ��: %d\n",evenSum);
    printf("Ȧ�� ��: %d\n",oddSum);

}