#include <stdio.h>

// �����
// *
// **
// ***
// ****
// *****

int main(){
    for(int i=0; i<=5;i++){  // 5�� �ݺ�
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }

    printf("---------------------------------------\n");
    // ���ﰢ�� �� ���
    for(int i=0; i<=5;i++){  // 5�� �ݺ�
        for(int j=5; j>=i; j--){
            printf("*");
        }
        printf("\n");

    }
    printf("---------------------------------------\n");
    for(int i=5; i>=1;i--){  // 5�� �ݺ�
        for(int j=1; j<=i; j++){
            printf("*");
        }
        printf("\n");

    }


}