#include <stdio.h>
#define MAX 5

int main(){
    int qntNeg = 0; 
    int numbers[MAX];

    for(int i = 0; i < MAX; i++){
        scanf("%d", &numbers[i]);

        if(numbers[i] < 0){
            qntNeg++;
        }
    }
    printf("Total de negativos: %d", qntNeg);
}