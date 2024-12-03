#include <stdio.h>
#include "ponto.h"


int main()
{
    int qntPontos;
    int primeiroPonto, segundoPonto;
    scanf("%d", &qntPontos);

	Pponto pontos = ponto_criar(qntPontos);
    ponto_preencher(pontos, qntPontos);

    scanf("%d", &primeiroPonto);
    scanf("%d", &segundoPonto);
    ponto_calcularEImprimir(pontos, primeiroPonto, segundoPonto, qntPontos);

    ponto_destruir(pontos);

    
}