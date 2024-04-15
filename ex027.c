#include <stdio.h>

int main()
{
    int linhas,pos,linEscohida;
    float valor,soma = 0; // iniciar soma com 0
    char op;
    scanf("%d", &linEscohida);
    scanf("%c", &op); // %c para ler so 1 caracater
    if ((linEscohida>=0)&&(linEscohida<=11)&&((op == 'S')||(op == 'M'))){
        for (linhas = 0; linhas <=11; linhas++){
            for (pos = 0; pos <=11; pos++){
                printf("[%d,%d]", linhas,pos);
                scanf("%f", &valor);
                if (linhas == linEscohida){
                    soma+=valor;
                }
            }
        }
        switch ( op ){
        case 'S':
            printf("%.1f\n", soma);
            break;
        case 'M':
            printf("%.1f\n", soma/12);
            break;
        }
    }
    return 0;
}

