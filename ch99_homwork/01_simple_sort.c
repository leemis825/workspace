#include <stdio.h>

// 3개의 수를 입력 받고, 큰숫자로 정렬해서 출력하는 프로그램

int main(){
    int num1 =20, num2 = 10, num3 =50;
    int temp;

    printf("%d > %d > %d", num1, num2, num3);
    printf("\n");


    if (num1<num2){
        temp = num1;
        num1 = num2;
        num2 = temp;
    }else if(num1<num3){
        temp = num1;
        num1 = num3;
        num3 = temp;

    }
    printf("%d > %d > %d", num1, num2, num3);
    printf("\n");
    if(num3>num2){
        temp = num3;
        num3 = num2;
        num2 = temp;
    }
    printf("%d > %d > %d", num1, num2, num3);
    // printf("\n");

    // num1 = (num1>num2)?num1:num2;
    // printf("%d > %d > %d", num1, num2, num3);
    // printf("\n");
    // num1 = (num1>num3)?num1:num3;
    // printf("%d > %d > %d", num1, num2, num3);
    // printf("\n");
    // num3 = (num3<num2)?num3:num2; 
    // printf("%d > %d > %d", num1, num2, num3);

}