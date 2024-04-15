#include <stdio.h>

int main()
{
    char nome;
    double salariofixo,salariomes,total;

    printf("Nome: "); scanf("%s", &nome);
    printf("Salario fixo: "); scanf("%lf", &salariofixo);
    printf("Vendas efetuada: "); scanf("%lf", &salariomes);
    total = (0.15 * salariomes) + salariofixo;
    printf("TOTAL = R$ %.2lf\n", total);

}
