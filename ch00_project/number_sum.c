#include <stdio.h>

// 1. ������ �Է� �ޱ�! (ex: 412)
// 2.  
// 3. ���: 4+1+2 =7

int main(){
    int num; 
    printf("���� �Է� : ");
    scanf("%d",&num);

   int total =0; 

   while(num>0){
    total += (num%10);
    num /= 10;
   }
   printf("���� : %d",total);


}