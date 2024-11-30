#ifndef _empresa_
#define _empresa_

typedef struct funcionario TFuncionario, *PFuncionario;

PFuncionarios empresa_criar(int qntdeFuncionarios);
void empresa_registraFuncionario(PFuncionarios cadastro, int totalFuncionarios);
void empresa_exibirFuncionarios(PFuncionarios cadastro, int totalFuncionarios);
void empresa_exibirFuncionario(PFuncionarios cadastro, int inscricao);
void empresa_contraCheque(PFuncionarios cadastro, int inscricao);
void empresa_folhaCompleta(PFuncionarios cadastro, int totalFuncionarios);
void empresa_destruir(PFuncionarios cadastro);

#endif
