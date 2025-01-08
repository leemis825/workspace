#include <stdio.h>

int main(){
    //0~100점을 입력 받고, 학점으로 변환해서 출력하는 프로그램

    // 1.입력부
    int score; // 점수(0~100점)
    char grade; // 학점(A, B, C, D, F)

    // 91~100 : A
    // 81~90  : B
    // 71~80  : C
    // 61~70  : D
    // 0~60   : F

    printf("점수 : ");
    scanf("%d",&score);

    // + 유효성 체크 : 사용자가 입력한 값이 유효한 값인지 체크 
    // 1. 값이 있는지 체크 
    // 2. 정수형 숫자인지 체크
    // 3. 0~100 사이의 값인지 범위 체크
    // → ex) 회원가입을 생각하면됨. 
    // → 기능 이외에도 유효성을 체크를 꼭 해야 함.(실제 업무에서) 

    
    // 2. 제어부
    if(score>90 &&score<=100){
        grade = 'A';
    }
    else if(score>80){
        grade = 'B';
    }
    else if(score>70){
        grade = 'C';
    }
    else if(score>60){
        grade = 'D';
    }
    else{
        grade = 'F';
    }

    // 3. 출력부
    printf("당신의 점수는 %d점으로 %c학점 입니다.", score,grade);



}