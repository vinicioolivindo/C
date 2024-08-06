#include <stdio.h>
#include <windows.h>

int main(){
    
    float n1, n2, i;
    //by J. VINICIOOO<
    
    do{
        printf("Digite sua PRIMEIRA nota: "); scanf("%f", &n1); 
        if ((n1<0) || (n1>10)) {
        Sleep(1000);
        printf("Valor NAO aceito!!\n");Sleep(700);
        printf("Digite um valor no intervalo [0,10]\n");Sleep(900);
        }else break;
    }while (1) ;
    do{
        printf("Digite sua SEGUNDA nota: "); scanf("%f", &n2); 
        if ((n2<0) || (n2>10)) {
        Sleep(800);
        printf("Valor NAO aceito!!\n");Sleep(900);
        printf("Digite um valor no intervalo [0,10]\n");Sleep(900);
        }else break;
    }while (1) ;

    float media = (n1+n2)/2;

    for (i = 0; i < 20; i++) {
        printf("=");
        }
    Sleep(300);
    printf("\nSua media eh: %.2f\n", media);
    for (i = 0; i < 20; i++) {
        printf("=");
    
    }
    Sleep(1500);
    
    if (media >= 7){
        printf("\n\033[1;36mPARABENS!!\nVOCE FOI APROVADO\033[m");
    }else{
        printf("\n\033[1;31mVOCE FOI REPROVADO!!\033[m");
}
}