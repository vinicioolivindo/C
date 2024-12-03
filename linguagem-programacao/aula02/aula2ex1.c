#include <stdio.h>
#define MAX 5

int main(){
    int ma = 0; 
    int me = 0;
    int numbers[MAX];

    for(int i = 0; i < MAX; i++){
        scanf("%d", &numbers[i]);

        if(numbers[i] > ma){
            ma = numbers[i];
        }
        else if(numbers[i] < me){
            me = numbers[i];
        }
    }
    printf("Maior: %d\nMenor: %d", ma,me);
}