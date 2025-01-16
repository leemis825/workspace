#include <stdio.h>

double FtoC(double a) {

    double cVal;

 

    cVal = (5.0 * (a - 32.0)) / 9.0;

    return cVal;

}

 

 

int main(void) {

 

    double fVal;

    printf("화씨 온도 값을 입력하시오. : ");

    scanf("%lf", &fVal);

 

    double cVal = FtoC(fVal);

 

    printf("화씨온도: %.1lf, 섭씨온도: %.1lf\n", fVal, cVal);

 

 

}