#include <stdio.h>

int main(){
    int N[20];
    int count = 0;

    for (int i = 0; i < 20; i++){
        scanf("%d", &N[i]);
    }
    for (int p = 19; p >= 0; p--){
        printf("N[%d] = %d\n",count, N[p]);
        count++;
    }
}