#include <stdio.h>

/**
 * �Ǻ���ġ ���� �ڵ� ����
 *  - �Ǻ���ġ �����̶�, ù° �� ��° ���� 1�̸�
 *    �� ���� ��� ���� �ٷ� �� ������ ���� ����
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