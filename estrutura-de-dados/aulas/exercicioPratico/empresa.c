#include "empresa.h"
#include <stdlib.h>
#include <stdio.h>

struct funcionario
{
  int inscricao;
  char *nome;
  int classe;
  int horas_normais;
  int horas_extras;
};

TFuncionario empresa_ler();

// objetiva alocar os espaços na memoria para o cadastro dos funcionarios
PFuncionarios empresa_criar(int qtdeFuncionarios)
{

  PFuncionarios cadastro = (PFuncionarios)malloc(qtdeFuncionarios * sizeof(TFuncionario));

  for (int i = 0; i < qtdeFuncionarios; i++)
    cadastro[i].inscricao = -1;

  return cadastro;
}

// objetiva receber uma solicitacao de inclusao de um novo funcionario
void empresa_registraFuncionario(PFuncionarios cadastro, int total)
{
  if (cadastro == NULL)
  {
    printf("Cadastro inválido.\n");
    return;
  }

  TFuncionario f = empresa_ler(); // Lê o novo funcionário

  for (int i = 0; i < total; i++)
  {
    if (cadastro[i].inscricao == -1) // Verifica se o índice está vazio
    {
      cadastro[i] = f; // Atribui o novo funcionário ao cadastro
      return;
    }
  }
}

TFuncionario empresa_ler()
{

  TFuncionario f;
  printf("Digite o numero de inscricao do funcionario: ");
  scanf("%d", &f.inscricao);

  printf("Digite o nome: ");
  f.nome = (char *)malloc(50 * sizeof(char)); // Aloca memória para o nome
  scanf(" %[^\n]s", f.nome);                  // Lê até a quebra de linha

  printf("Digite a classe: ");
  scanf("%d", &f.classe);

  printf("Digite as horas normais: ");
  scanf("%d", &f.horas_normais);

  printf("Digite as horas extras: ");
  scanf("%d", &f.horas_extras);

  return f;
}

void empresa_exibirFuncionarios(PFuncionarios cadastro, int total)
{
  for (int i = 0; i < total; i++)
  {
    printf("\n");
    printf("Nome: %s\n", cadastro[i].nome);
    printf("Inscricao: %d\n", cadastro[i].inscricao);
    printf("Classe: %d\n", cadastro[i].classe);
    printf("Horas trabalhadas: %d\n", cadastro[i].horas_normais);
    printf("Horas extras trabalhadas: %d\n", cadastro[i].horas_extras);
  }
}
void empresa_exibirFuncionario(PFuncionarios cadastro, int inscricao)
{
  for (int i = 0; i < inscricao; i++)
  {
    if (cadastro[i].inscricao == inscricao)
    {
      printf("\n");
      printf("Nome: %s\n", cadastro[i].nome);
      printf("Inscricao: %d\n", cadastro[i].inscricao);
      printf("Classe: %d\n", cadastro[i].classe);
      printf("Horas trabalhadas: %d\n", cadastro[i].horas_normais);
      printf("Horas extras trabalhadas: %d\n", cadastro[i].horas_extras);
      printf("\n");
    }
  }
}
void empresa_contraCheque(PFuncionarios cadastro, int total, int inscricao, float salarioReferenciaPorHoras)
{
  for (int i = 0; i < total; i++)
  {
    if (cadastro[i].inscricao == inscricao)
    {
      float salarioPorHoras = salarioReferenciaPorHoras;

      // Calcula salário por classe
      switch (cadastro[i].classe)
      {
      case 1:
        salarioPorHoras *= 1.3;
        break;
      case 2:
        salarioPorHoras *= 1.9;
        break;
      default:
        break;
      }

      // Cálculos
      float salario = salarioPorHoras * cadastro[i].horas_normais;
      float valorHorasExtras = ((0.35 * salarioPorHoras) + salarioPorHoras) * cadastro[i].horas_extras;
      float salarioBruto = salario + valorHorasExtras;
      float descontoINSS = 0.14 * salarioBruto;
      float salarioLiquido = salarioBruto - descontoINSS;

      // Exibição
      printf("N Classe: %d\n", cadastro[i].classe);
      printf("Nome: %s\n", cadastro[i].nome);
      printf("Salario horas normais: %.2f\n", salario);
      printf("Salario horas extras: %.2f\n", valorHorasExtras);
      printf("Deducao INSS: %.2f\n", descontoINSS);
      printf("Salario Liquido: %.2f\n\n", salarioLiquido);
      return;
    }
  }
  printf("Funcionário com inscrição %d não encontrado.\n", inscricao);
}

void empresa_folhaCompleta(PFuncionarios cadastro, int total)
{
  for (int i = 0; i < total; i++)
  {
    empresa_contraCheque(cadastro,100, i, 20);
  }
}
void empresa_destruir(PFuncionarios cadastro, int total)
{
  if (cadastro == NULL)
    return;

  for (int i = 0; i < total; i++)
  {
    free(cadastro[i].nome);
  }
  free(cadastro);
}
