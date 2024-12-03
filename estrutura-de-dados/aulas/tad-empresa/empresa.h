#ifndef __empresa__h
#define __empresa__h

typedef struct funcionario TFuncionario, *PFuncionarios;

PFuncionarios empresa_criar(int qtdeFuncionarios);
void          empresa_registraFuncionario(PFuncionarios cadastro, int total);
void          empresa_exibirFuncionarios(PFuncionarios cadastro, int total);
void          empresa_exibirFuncionario(PFuncionarios cadastro, int inscricao);
void          empresa_contraCheque(PFuncionarios cadastro, int inscricao);
void          empresa_folhaCompleta(PFuncionarios cadastro, int total);
void          empresa_destruir(PFuncionarios cadastro);

#endif