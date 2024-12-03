#include <stdio.h>

int main(){
    int vet[10], referInt, countMin = 0, vezesAp = 0;

    printf("Valor de referencia: ");
    scanf("%d", &referInt);

    for(int i = 0; i < 10; i++){
        printf("Digite o %d valor: ", i+1); 
        scanf("%d", &vet[i]);
    }

    printf("Valores maiores que %d: ", referInt);
    for(int i = 0; i < 10; i++){
        if(vet[i] > referInt)
            printf("%d ", vet[i]);
        
        if(vet[i] < referInt)
            countMin++;
        if(referInt == vet[i])
            vezesAp++;
    }    
    printf("\nExistem %d numeros menores que %d\n", countMin,referInt);
    printf("O valor de referencia aparece %d vezes", vezesAp);
}