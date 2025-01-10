/**
 *  return 반환값
 *   - 기본적으로 함수 종료(호출한 곳으로 돌아가기)
 *   - 반환값 → 데이터 반환타입도 함수 중의부 정의
 *   - 반환값이 없는 경우는 데이터 반환타입 void 정의
 *   - return or 반환값 모두 생략가능
 */


#include <stdio.h>

void voidFnc();
int intFnc();
char intFnc2();

void voidFnc(){
    printf("Hello");
    return;
}

int intFnc(){
    return 99;
}
char intFnc2(){
    return 'A';
}

int main(){
    voidFnc();
    intFnc();

}