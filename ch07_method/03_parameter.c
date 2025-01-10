/**
 * Parameter(매개변수)
 *  - 함수의 입력 값
 *  - 여러개를 사용 가능(,구분)
 *  - 똑같은 이름의 매개변수는 사용 불가!
 *  - 매개변수를 사용하지 않을 때는 void 사용
 * 
 */
#include <stdio.h>

int get_num(int a, int b); // 타입을 double, char 로 바꿔도 이름이 똑같으면 안됨. 

int get_num(int a, int b){

    return 5; 
}

int main(void){
    printf("%d",get_num(1,2));
}