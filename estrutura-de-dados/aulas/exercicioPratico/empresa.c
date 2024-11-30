#include "./empresa.h"
#include <stdio.h>
#include <stdlib.h>

struct funcionario{
    int inscricao;
    char* nome;
    int classe;
    int horas_normais;
    int horas_extras;
}

PFuncionario empresa_criar(int qntdeFuncionarios){
    return (PFuncionarios)malloc(qntdeFuncionarios*sizeof(TFuncionario))
}
void empresa_registraFuncionario(PFuncionarios cadastro, int totalFuncionarios){

    if(cadastro != NULL){
        TFuncionario f;
        printf("N° do funcionario: ");
        scanf("%d", &f.inscricao);

        f.nome = (char*)malloc(50*sizeof(char));
        printf("Nome do funcionario: ");
        scanf("%c", f.nome);

        printf("Classe do funcionario: ");
        scanf("%d", &f.classe);

        printf("Horas trabalhadas: ");
        scanf("%d", &f.horas_normais);

        printf("Horas extras: ");
        scanf("%d", &f.horas_extras);

        for(int i=0; i<totalFuncionarios; i++){
            if(cadastro[i].inscricao == -1){
                cadastro[i] = f;
                return
            }
        }
    }

}
void empresa_exibirFuncionarios(PFuncionarios cadastro);
void empresa_exibirFuncionario(PFuncionarios cadastro, int inscricao);
void empresa_contraCheque(PFuncionarios cadastro, int inscricao);
void empresa_folhaCompleta(PFuncionarios cadastro);
void empresa_destruir(PFuncionarios cadastro);