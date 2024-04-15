#include <stdio.h>

int main()
{
    float n1, n2;

    do{
        printf("Primeira nota [0,10]: ");
        scanf("%f", &n1);
        if (n1 < 0 || n1 > 10){
            printf("Nota invalida!!\n");
        }else{
            break;
        }
    } while (1);

    do{
        printf("Segunda nota [0,10]: ");
        scanf("%f", &n2);
        if (n2 < 0 || n2 > 10){
            printf("Nota invalida!!\n");
        }else{
            break;
        }
    } while (1);

    float media = (n1 + n2) / 2;

    if (media >= 7){
        printf("VOCE FOI APROVADO!!");
    }else{
        printf("VOCE FOI REPROVADO!!");
    }
    printf(" Com a media %.1f.", media);
}
