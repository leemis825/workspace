// clc에 복붙한 코드를 다시 붙여넣어서 실행한 결과
#include <stdio.h>

// 함수명은 FtoC, 섭씨온도 변수명은 cVal 사용할 것
double FtoC(double a) {
    double cVal;
    // 화씨온도를 섭씨온도로 변환하는 수식: (5.0 x (화씨온도-32.0)) / 9.0
    cVal = (5.0 * (a - 32.0)) / 9.0;
    // 변경 된 섭씨 온도를 return값으로 전달
    return cVal;
}

int main(void) {
    double fVal;
    //사용자에게 임의의 화씨 온도 값을 입력 (변수명은 fVal) ex) 17.0
    printf("화씨 온도 값을 입력하시오. : ");
    scanf("%lf", &fVal);
    //FtoC함수에 보낼 매개 변수는 화씨
    double cVal = FtoC(fVal);

    // printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal); 을 사용해서 출력
    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);
}