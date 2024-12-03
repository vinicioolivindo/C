#include "empresa.h"
#include <stdlib.h>
#include <stdio.h>

struct funcionario{
  int inscricao;
  char* nome;
  int classe;
  int horas_normais;
  int horas_extras;  
};

TFuncionario empresa_ler();

//objetiva alocar os espaços na memoria para o cadastro dos funcionarios
PFuncionarios empresa_criar(int qtdeFuncionarios){

    PFuncionarios cadastro = (PFuncionarios)malloc(qtdeFuncionarios*sizeof(TFuncionario));

    for (int i = 0 ; i < qtdeFuncionarios; i++)
        cadastro[i].inscricao = -1;

    return cadastro;

}

//objetiva receber uma solicitacao de inclusao de um novo funcionario
void          empresa_registraFuncionario(PFuncionarios cadastro, int total){

    if(cadastro != NULL){

        TFuncionario f = empresa_ler();        

        for(int i=0; i<total; i++){
           if(cadastro[i].inscricao == -1){
             cadastro[i] = f; 
             return;
           }
        }
    }

}

TFuncionario empresa_ler(){
        
        TFuncionario f;
        printf("Digite o numero de inscricao do funcionario: ");
        scanf("%d", &f.inscricao);

        printf("Digite o nome:");
        f.nome = (char*)malloc(50*(sizeof(char)));
        scanf("%s", f.nome);

        printf("Digite a classe: ");
        scanf("%d", &f.classe);

        printf("Digite as horas normais: ");
        scanf("%d", &f.horas_normais);

        printf("Digite as horas extras: ");
        scanf("%d", &f.horas_extras);

        return f;
}

void          empresa_exibirFuncionarios(PFuncionarios cadastro, int total){
        for(int i = 0; i < total; i++){
          if(cadastro[i].inscricao != -1){
            printf("Inscricao: %d", cadastro[i].inscricao);
            printf("Nome: %s", cadastro[i].nome);
            printf("Classe: %d", cadastro[i].classe);
          }
        }
}
void          empresa_exibirFuncionario(PFuncionarios cadastro, int inscricao){

}
void          empresa_contraCheque(PFuncionarios cadastro, int inscricao){

}
void          empresa_folhaCompleta(PFuncionarios cadastro, int total){

}
void          empresa_destruir(PFuncionarios cadastro){

}
