#include <stdio.h>


int mp(int base, int exp) {
    int res = 1;
    for(int i=0; i < exp; i++){
        // i = 0 부터
        // i = 9 까지 반복 
        res = res * base;
    }

    return res;
}

int main(){
    int res;
    res = mp(2,10);
    printf("%d",res);  // 1024
    return 0;
}

