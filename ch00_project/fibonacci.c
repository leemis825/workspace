#include <stdio.h>

/**
 * 피보나치 수열 코드 개발
 *  - 피보나치 수열이란, 첫째 및 둘째 항이 1이면
 *    그 뒤의 모든 항은 바로 앞 두항의 합인 수열
 *  1 1 2 3 5 8 13 ...
 */

// a b a+b b+ a+b 
int main(){
    int a=1, b=1, fib;
    printf("%d %d ",a,b);
    // for(int i =0; i<=5; i++){
    //         fib = a+b;
    //         printf("%d ",fib);
    //         a = b;
    //         b = fib;
    // }

    while(1){
        fib = a + b; // 2
        printf("%d ",fib);
        a = b;
        b = fib;
        if(fib >13){
            break;
        }
    }
}