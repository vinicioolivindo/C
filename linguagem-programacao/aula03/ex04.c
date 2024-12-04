#include <stdio.h>

int main(){
    int vet[10], qntValoresPares;

    for(int i = 0; i < 10; i++){
        printf("Digite o %d valor: ", i+1); 
        scanf("%d", &vet[i]);

        if(vet[i]%2 == 0)
            qntValoresPares++;
    }
    printf("Existem %d valores pares", qntValoresPares);

}