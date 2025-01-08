#include <stdio.h>

int main(){

    //사용자로부터 나이를 입력 받고 20살 이상이면 
    //주류를 판매하는 시스템
/*
    int num;
    printf("나이를 입력하시오. : ");
    scanf("%d", &num);
    if(num >=20){
        printf("주류를 살 수 있습니다.");
    }
    else if(num <20){
        printf("주류를 살 수 있습니다.");
    }
*/
    //1. 나이 입력 받기 
    int age;
    printf("나이: ");
    scanf("%d", &age);
    
    //2.주류 구매 여부 판단
    if (age >20){
        printf("주류 구매가 가능합니다.");
    }
    else{
        printf("주류 구매가 불가능합니다.");
    }


}