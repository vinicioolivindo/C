#include <stdio.h>

typedef struct carro Tcarro;
typedef struct motor Tmotor;

struct motor  
{
    int potencia;
    float torque;
    float consumo;
    char* nome;
};

struct carro
{
    int anoF;
    float preco;
    Tmotor motor;  
    char* cor;
    char modelo;
};

int main(){
    Tcarro carros[3];

    for(int i = 0; i < 3; i++){  // Corrigido o índice para começar de 0
        printf("Nome do modelo do carro: ");
        scanf(" %c", &carros[i].modelo);  // Adiciona um espaço antes de %c para ignorar o \n

        printf("Ano de fabricacao: ");
        scanf("%d", &carros[i].anoF);

        printf("Preco: ");
        scanf("%f", &carros[i].preco);
    }

    for(int d = 0; d < 3; d++){  // Corrigido o índice para começar de 0
        printf("\nInformacoes do %d carro:\n", d+1);
        printf("Modelo: %c\n", carros[d].modelo);
        printf("Ano de fabricacao: %d\n", carros[d].anoF);
        printf("Preco: %.2f\n", carros[d].preco);  // Formatado para duas casas decimais
    }

    return 0;
}
