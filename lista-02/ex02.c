#include <stdio.h>

int main(){
    int N[10];

    for(int i = 0; i < 10; i++){
        if (i == 0){
            scanf("%d", &N[i]);
            printf("N[%d] = %d\n",i, N[i]);
            continue;
        }
        N[i] = N[i-1] * 2;
        printf("N[%d] = %d\n",i, N[i]);
    }
}