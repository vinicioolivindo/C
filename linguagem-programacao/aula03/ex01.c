#include <stdio.h>

int main(){
    int vet[5], sum = 0;
    for(int i = 0; i < 5; i++){
        scanf("%d", &vet[i]);
        sum+=vet[i];
    }
    printf("A soma eh: %d", sum);
}