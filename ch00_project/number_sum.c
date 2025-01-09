#include <stdio.h>

// 1. 정수값 입력 받기! (ex: 412)
// 2.  
// 3. 출력: 4+1+2 =7

int main(){
    int num; 
    printf("정수 입력 : ");
    scanf("%d",&num);

   int total =0; 

   while(num>0){
    total += (num%10);
    num /= 10;
   }
   printf("총합 : %d",total);


}